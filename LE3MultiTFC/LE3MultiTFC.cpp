#define GAMELE3

#include <filesystem>
#include <map>
#include <Shlwapi.h>

#include "../../Shared-ASI/Common.h"
#include "../../Shared-ASI/Interface.h"
#include "../../Shared-ASI/ME3Tweaks/ME3TweaksHeader.h"

#define MYHOOK "LE3MultiTFC"

SPI_PLUGINSIDE_SUPPORT(L"LE3MultiTFC", L"---", L"1.0.0", SPI_GAME_LE3, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_SEQATTACH;
#ifdef ASI_DEBUG
constexpr bool GIsRelease = false;
#else
constexpr bool GIsRelease = true;
#endif

ME3TweaksASILogger logger("LE3MultiTFC v1", "LE3MultiTFC.log");

bool ContentScanComplete = false;

// Fixes bad launcher logic when not using Autoboot (sets the wrong working directory)
void SetWorkingDirectory() {
	WCHAR path[MAX_PATH];
	GetModuleFileNameW(NULL, path, MAX_PATH);
	std::filesystem::path exePath = path;
	SetCurrentDirectoryW(exePath.parent_path().c_str());
}

// Functions used to make a list of available DLCs.
// ======================================================================

std::wstring GetDLCsRoot()
{
	wchar_t modulePath[512];

	GetModuleFileNameW(nullptr, modulePath, 512);
	PathRemoveFileSpecW(modulePath); // Remove ASI
	PathRemoveFileSpecW(modulePath); // Remove Win64
	PathRemoveFileSpecW(modulePath); // Remove Binaries

	std::wstring root;
	root.append(modulePath);
	root.append(L"\\BioGame\\DLC\\");

	return root;
}

std::vector<std::wstring> GetDLCTFCs(std::wstring&& searchRoot)
{
	std::vector<std::wstring> extraTFCsToRegister{};
	searchRoot.append(L"*");

	WIN32_FIND_DATA fd;
	HANDLE handle = FindFirstFileW(searchRoot.c_str(), &fd);
	if (handle != INVALID_HANDLE_VALUE) {
		do
		{
			if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY && wcslen(fd.cFileName) > 8
				&& fd.cFileName[0] == L'D' && fd.cFileName[1] == L'L' && fd.cFileName[2] == L'C' && fd.cFileName[3] == L'_'
				&& fd.cFileName[4] == L'M' && fd.cFileName[5] == L'O' && fd.cFileName[6] == L'D' && fd.cFileName[7] == L'_')
			{
				wchar_t autoloadPath[512];
				swprintf_s(autoloadPath, 512, L"..\\..\\BioGame\\DLC\\%s\\CookedPCConsole", fd.cFileName);

				if (std::filesystem::exists(autoloadPath))
				{
					std::wstring defaultPath = autoloadPath;
					defaultPath += L"\\Textures_";
					defaultPath += fd.cFileName;
					defaultPath += L".tfc";

					// Find TFCs in CookedPCConsole folder
					std::wstring path(autoloadPath);
					std::wstring ext(L".tfc");

					for (auto& p : std::filesystem::recursive_directory_iterator(path))
					{
						if (p.path().extension() == ext) 
						{
							auto lpath = p.path();
							auto rpath = defaultPath;
							if (p.path().compare(defaultPath) != 0)
							{
								logger.writeWideLineToLog(wstring_format(L"Found additional mod TFC: %s", p.path().c_str()), true, true);
								extraTFCsToRegister.emplace_back(p.path());
							}
						}
					}
				}
			}
		} while (FindNextFile(handle, &fd) != false);
	}
	return extraTFCsToRegister;
}

// HasAtLeastOneBasegameTFC: So we know when we can call RegisterTFC
typedef bool (*tNoParamBool)();
tNoParamBool HasAtLeastOneBasegameTFC = nullptr;

// ======================================================================
// RegisterTFC prototype so we can call it to register our TFCs
// =====================================================================
bool hasRegisteredDLCs = false;
typedef void (*tRegisterTFC)(FString* name);
tRegisterTFC RegisterTFC = nullptr;
tRegisterTFC RegisterTFC_orig = nullptr;

void RegisterTFC_hook(FString* tfcPath)
{
	logger.writeWideLineToLog(wstring_format(L"Basegame TFC registration: %s", tfcPath->Data), true, true);
	RegisterTFC_orig(tfcPath);

	if (!hasRegisteredDLCs)
	{
		auto dlcTFCs = GetDLCTFCs(GetDLCsRoot());
		for (auto& path : dlcTFCs) {
			FString extraTFC(const_cast<wchar_t*>(path.c_str()));
			logger.writeWideLineToLog(wstring_format(L"Registering extra DLC TFC: %s", extraTFC.Data), true, true);
			RegisterTFC_orig(&extraTFC);
		}
		hasRegisteredDLCs = true;
	}
}

tRegisterTFC RegisterDLCTFC = nullptr;
tRegisterTFC RegisterDLCTFC_orig = nullptr;

void RegisterDLCTFC_hook(FString* tfcPath)
{
	auto f = (wchar_t*)tfcPath;
	logger.writeWideLineToLog(wstring_format(L"DLC TFC registration: %s", tfcPath->Data), true, true);
	RegisterDLCTFC_orig(tfcPath);
}


// The list of pending TFCs to register once our first package file tries to load
std::vector<FString*> DLCTFCsToRegister;

// Logs a message and registers a TFC
void RegisterTFCWrapper(FString* tfcPath)
{
	logger.writeWideLineToLog(wstring_format(L"  Registering TFC: %s", tfcPath->Data), true);
	RegisterTFC(tfcPath);
	// This just crashes it idk why
	//free(tfcPath->Data); // Data constructed here was made with _wcsdup
}

SPI_IMPLEMENT_ATTACH
{
	SetWorkingDirectory(); // This needs done at startup
	if (!GIsRelease) {
		Common::OpenConsole();
	}
	// Find RegisterTFC so we can register TFCs
	INIT_FIND_PATTERN_POSTHOOK(RegisterTFC, /*48 89 5c 24 10*/ "57 48 83 ec 40 48 8b d9 48 8b 0d 4c 51 41 01 83 7b 08 00 48 8b 01 74 05 48 8b 13 eb 07");
	INIT_HOOK_PATTERN(RegisterTFC);

	//INIT_FIND_PATTERN_POSTHOOK(RegisterDLCTFC, /*"40 57 41 56 41*/ "57 48 83 ec 40 48 c7 44 24 20 fe ff ff ff 48 89 5c 24 60 48 89 6c 24 68 48 89 74 24 70 48 8b e9 45 33 ff 41 8b ff 48 8b 41 30 44 39 78 08 0f 8e 1c 01 00 00");
	//INIT_HOOK_PATTERN(RegisterDLCTFC);

	// Initialize the SDK because we need object names.
	// INIT_CHECK_SDK();
	/*
	std::wstring dlcRoot = GetDLCsRoot();
	GetLE1DLCMountOrder(dlcMountOrder, dlcRoot.c_str());
	for (const auto& autoload : dlcMountOrder) // This has weird error
	{
		TCHAR tmpPath[MAX_PATH];
		TCHAR dlcPath[MAX_PATH];

		// It's a DLC mod. LE only has a single autoload.ini (Bring Down The Sky) and it's not in the DLC folder
		swprintf_s(tmpPath, MAX_PATH, L"..\\..\\BioGame\\DLC\\%s\\AutoLoad.ini", autoload.second.c_str());
		logger.writeWideLineToLog(wstring_format(L"Found DLC Autoload.ini: %s, mount %i", tmpPath, autoload.first), true);
		GExtraAutoloadPaths.emplace_back(tmpPath);

		swprintf_s(dlcPath, MAX_PATH, L"..\\..\\BioGame\\DLC\\%s", autoload.second.c_str());
		auto fileIterator = std::filesystem::recursive_directory_iterator(dlcPath);

		for (const auto& entry : fileIterator)
		{
			if (entry.is_directory())
			{
				logger.writeWideLineToLog(wstring_format(L"\tScanning %s", entry.path().c_str()), true);
				continue;
			}

			// _wcsdup might leak memory but not much. Freeing it upon consumption crashes the app so...
			auto extension = entry.path().extension();
			if (extension == L".tfc") {
				auto tfcPath = entry.path().c_str();
				logger.writeWideLineToLog(wstring_format(L"\t\tFound TFC: %s", tfcPath), true);
				DLCTFCsToRegister.push_back(new FString(_wcsdup(tfcPath))); // We have to wait until first registration attempt or we'll hit a null pointer
			}
			else if (extension == L".isb")
			{
				// Register ISB
				auto isbPath = entry.path().c_str();
				logger.writeWideLineToLog(wstring_format(L"\t\tFound ISB: %s", isbPath), true);
				ISBsToRegister.push_back(_wcsdup(isbPath)); // We have to wait until first registration attempt or we'll hit a null pointer
			}
		}
	}
	ContentScanComplete = true;
	*/
	return true;
}

SPI_IMPLEMENT_DETACH
{
	if (!GIsRelease) {
		Common::CloseConsole();
	}
	logger.close();
	return true;
}