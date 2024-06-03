#define GAMELE3

#include <filesystem>
#include <map>
#include <set>
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

// List of DLC we have additionally mounted. The game seems to mount TFC multiple times, we don't for performance.
set<std::wstring> MountedDLCNames;

//
//// ======================================================================
//// RegisterTFC prototype so we can call it to register our TFCs
//// =====================================================================
typedef void (*tRegisterTFC)(FString* name);
tRegisterTFC RegisterTFC = nullptr;


#pragma pack(push, 4)
// Reverse engineered together with d00t
struct SFXAdditionalContent
{
	unsigned char Unknown1[0x64];
	FString RelativeDLCPath; // 0x64
	TArray<BYTE> PCConsoleTOC; // 0x74
	TArray<BYTE> ConfigFile; //0x84
	unsigned char Unknown2[0x40]; // 0x94
	void* PointerToGameContent; // 0xD4
};
#pragma pack(pop)

typedef wchar_t* (*tGetDLCName)(SFXAdditionalContent* additionalContent, FString* outDlcName);
tGetDLCName GetDLCName = nullptr;

typedef unsigned long long (*tRegisterDLCTFC)(SFXAdditionalContent* additionalContent);
tRegisterDLCTFC RegisterDLCTFC = nullptr;
tRegisterDLCTFC RegisterDLCTFC_orig = nullptr;
unsigned long long RegisterDLCTFC_hook(SFXAdditionalContent* content)
{
	// Run the initial code
	auto res = RegisterDLCTFC_orig(content);

	FString dlcName;
	GetDLCName(content, &dlcName);

	if (dlcName.Count <= 8 || wcsncmp(dlcName.Data, L"DLC_MOD_", 8) != 0)
		return res; // Not a DLC mod

	auto dlcNameStr = std::wstring(dlcName.Data);
	if (MountedDLCNames.find(dlcNameStr) != MountedDLCNames.end())
	{
		return res; // The DLC TFCs were already mounted. Game seems to call this twice for some reason.
	}

	MountedDLCNames.insert(dlcNameStr);

	wchar_t dlcCookedPath[512];
	// No slash
	swprintf_s(dlcCookedPath, 512, L"%sCookedPCConsole", content->RelativeDLCPath.Data);

	if (std::filesystem::exists(dlcCookedPath))
	{
		std::wstring defaultPath = dlcCookedPath;
		defaultPath += L"\\Textures_";
		defaultPath += dlcName.Data;
		defaultPath += L".tfc";

		// Find TFCs in CookedPCConsole folder
		std::wstring path(dlcCookedPath);
		std::wstring ext(L".tfc");

		for (auto& p : std::filesystem::recursive_directory_iterator(path))
		{
			if (p.path().extension() == ext)
			{
				auto lpath = p.path();
				auto rpath = defaultPath;
				if (p.path().compare(defaultPath) != 0) // Not the default TFC
				{
					logger.writeWideLineToLog(wstring_format(L"Registering additional mod TFC: %s", p.path().c_str()), true, true);
					FString tfcName(const_cast<wchar_t*>(p.path().c_str()));
					RegisterTFC(&tfcName);
				}
			}
		}
	}


	return res;
	//logger.writeWideLineToLog(wstring_format(L"  Registering TFC: %s", tfcPath->Data), true);
	//RegisterTFC(tfcPath);
	// This just crashes it idk why
	//free(tfcPath->Data); // Data constructed here was made with _wcsdup
}


SPI_IMPLEMENT_ATTACH
{
	if (!GIsRelease) {
		Common::OpenConsole();
	}
// Find RegisterTFC so we can register TFCs
INIT_FIND_PATTERN_POSTHOOK(RegisterTFC, /*48 89 5c 24 10*/ "57 48 83 ec 40 48 8b d9 48 8b 0d 4c 51 41 01 83 7b 08 00 48 8b 01 74 05 48 8b 13 eb 07");

// Hook DLC TFC registration for Textures_DLC_MOD_XXX and mount our TFCs there
INIT_FIND_PATTERN_POSTHOOK(RegisterDLCTFC, /*"40 57 48 83 ec*/ "60 48 c7 44 24 20 fe ff ff ff 48 89 5c 24 70 48 8b d9 8b 89 c8 00 00 00");
INIT_HOOK_PATTERN(RegisterDLCTFC);

// Use game method of determining DLC name for simplicity
INIT_FIND_PATTERN_POSTHOOK(GetDLCName, /*40 55 48 8b ec*/ "48 83 ec 60 48 c7 45 c0 fe ff ff ff 48 89 5c 24 70 48 89 74 24 78 48 89 bc 24 80 00 00 00 48 8b da 48 8b f9 44 8b 41 6c")

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