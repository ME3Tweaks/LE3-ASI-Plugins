#include <shlwapi.h>
#include <psapi.h>
#include <string>
#include <fstream>
#include <ostream>
#include <streambuf>
#include <sstream>

#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/SdkHeaders.h"

#define SLHHOOK "LE3StreamingLevelsHUD_"

SPI_PLUGINSIDE_SUPPORT(L"LE3StreamingLevelsHUD", L"Mgamerz", L"1.0.0", SPI_GAME_LE3, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;


// ======================================================================


// ProcessEvent hook
// Renders the HUD for Streaming Levels
// ======================================================================


typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;

size_t MaxMemoryHit = 0;
bool DrawSLH = true;
bool CanToggleDrawSLH = false;

static void RenderTextSLH(std::wstring msg, const float x, const float y, const char r, const char g, const char b, const float alpha, UCanvas* can)
{
	can->SetDrawColor(r, g, b, alpha * 255);
	can->SetPos(x, y + 64); //+ is Y start. To prevent overlay on top of the power bar thing
	can->DrawTextW(FString{ const_cast<wchar_t*>(msg.c_str()) }, 1, 0.8f, 0.8f, nullptr);
}

const char* FormatBytes(size_t bytes, char* keepInStackStr)
{
	const char* sizes[4] = { "B", "KB", "MB", "GB" };

	int i;
	double dblByte = bytes;
	for (i = 0; i < 4 && bytes >= 1024; i++, bytes /= 1024)
		dblByte = bytes / 1024.0;

	sprintf(keepInStackStr, "%.2f", dblByte);

	return strcat(strcat(keepInStackStr, " "), sizes[i]);
}

int line = 0;
PROCESS_MEMORY_COUNTERS pmc;


void biohud_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	if (!strcmp(Function->GetFullName(), "Function SFXGame.BioHUD.PostRender"))
	{
		line = 0;
		auto hud = reinterpret_cast<ABioHUD*>(Context);
		if (hud != nullptr)
		{
			// Toggle drawing/not drawing
			if ((GetKeyState('T') & 0x8000) && (GetKeyState(VK_CONTROL) & 0x8000)) {
				if (CanToggleDrawSLH) {
					CanToggleDrawSLH = false; // Will not activate combo again until you re-press combo
					DrawSLH = !DrawSLH;
				}
			}
			else
			{
				if (!(GetKeyState('T') & 0x8000) || !(GetKeyState(VK_CONTROL) & 0x8000)) {
					CanToggleDrawSLH = true; // can press key combo again
				}
			}

			// Render mem usage
			if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)))
			{
				unsigned char r = 0;
				unsigned char g = 255;

				// Flash if high crit
				char str[18] = ""; //Allocate
				float alpha = 1.0f;

				if (DrawSLH)
				{
					wchar_t objectName[512];
					swprintf_s(objectName, 512, L"Memory usage: %S (%llu bytes)", FormatBytes(pmc.PagefileUsage, str), pmc.PagefileUsage);
					RenderTextSLH(objectName, 5.0f, line * 12.0f, r, g, 0, alpha, hud->Canvas);
				}
				line++;

				// Max Hit
				if (pmc.PagefileUsage > MaxMemoryHit)
				{
					MaxMemoryHit = pmc.PagefileUsage;
				}

				if (DrawSLH) {
					wchar_t objectName[512];
					swprintf_s(objectName, 512, L"Max memory hit: %S (%llu bytes)", FormatBytes(MaxMemoryHit, str), MaxMemoryHit);
					RenderTextSLH(objectName, 5.0f, line * 12.0f, r, g, 0, alpha, hud->Canvas);
				}

				line++;
			}

			if (DrawSLH && hud->WorldInfo)
			{
				//screenLogger->ClearMessages();
				//logger.writeToConsoleOnly(string_format("Number of streaming levels: %d\n", hud->WorldInfo->StreamingLevels.Count), true);
				if (hud->WorldInfo->StreamingLevels.Count > 0) {
					int yIndex = 3; //Start at line 3 (starting at 0)
					for (int i = 0; i < hud->WorldInfo->StreamingLevels.Count; i++) {
						std::wstringstream ss;
						ULevelStreaming* sl = hud->WorldInfo->StreamingLevels.Data[i];
						if (sl->bShouldBeLoaded || sl->bIsVisible) {
							unsigned char r = 255;
							unsigned char g = 255;
							unsigned char b = 255;

							ss << sl->PackageName.GetName();
							if (sl->PackageName.Number > 0)
							{
								ss << "_" << sl->PackageName.Number;
							}
							if (sl->bIsVisible)
							{
								ss << " Visible";
								r = 0;
								g = 255;
								b = 0;
							}
							else if (sl->bHasLoadRequestPending)
							{
								ss << " Loading";
								r = 255;
								g = 229;
								b = 0;
							}
							else if (sl->bHasUnloadRequestPending)
							{
								ss << " Unloading";
								r = 0;
								g = 255;
								b = 229;
							}
							else if (sl->bShouldBeLoaded && sl->LoadedLevel)
							{
								ss << " Loaded";
								r = 255;
								g = 255;
								b = 0;
							}
							else if (sl->bShouldBeLoaded)
							{
								ss << " Pending load";
								r = 255;
								g = 175;
								b = 0;
							}
							const std::wstring msg = ss.str();
							RenderTextSLH(msg, 5, yIndex * 12.0f, r, g, b, 1.0f, hud->Canvas);
							yIndex++;
						}
					}
				}
			}
		}
	}

	ProcessEvent_orig(Context, Function, Parms, Result);
}

// ======================================================================


SPI_IMPLEMENT_ATTACH
{
	//Common::OpenConsole();

	auto _ = SDKInitializer::Instance();
/*writeln(L"Attach - names at 0x%p, objects at 0x%p",
	SDKInitializer::Instance()->GetBioNamePools(),
	SDKInitializer::Instance()->GetObjects());*/

if (auto rc = InterfacePtr->FindPattern((void**)&ProcessEvent, "40 55 41 56 41 57 48 81 EC 90 00 00 00 48 8D 6C 24 20");
	rc != SPIReturn::Success)
{
	//writeln(L"Attach - failed to find ProcessEvent pattern: %d / %s", rc, SPIReturnToString(rc));
	return false;
}


if (auto rc = InterfacePtr->InstallHook(SLHHOOK "ProcessEvent", ProcessEvent, biohud_hook, (void**)&ProcessEvent_orig);
	rc != SPIReturn::Success)
{
	//writeln(L"Attach - failed to hook ProcessEvent: %d / %s", rc, SPIReturnToString(rc));
	return false;
}

return true;
}

SPI_IMPLEMENT_DETACH
{
	//Common::CloseConsole();
	return true;
}
