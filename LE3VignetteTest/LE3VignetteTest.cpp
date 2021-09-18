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
#include "../LE3-SDK/ME3TweaksHeader.h"
#include "../LE3-SDK/ScreenLogger.h"

#define MYHOOK "LE3CameraInfo_"

ScreenLogger sl(L"CameraLogger");

SPI_PLUGINSIDE_SUPPORT(L"LE3CameraInfo", L"Mgamerz", L"1.0.0", SPI_GAME_LE3, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;


// ======================================================================

// ======================================================================
// FOV logic
// Dumb shit to just see what's possible
float FOVMin = 5.0;
float FOVMax = 110.0;
float FOVStep = 0.1; // Step size of FOV
float FOVCurrent = 75.0;
bool FOVIncreasing = true;

// ProcessEvent hook
// Renders the HUD for Streaming Levels
// ======================================================================
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;

size_t MaxMemoryHit = 0;
static void RenderTextSLH(std::wstring msg, const float x, const float y, const char r, const char g, const char b, const float alpha, UCanvas* can)
{
	can->SetDrawColor(r, g, b, alpha * 255);
	can->SetPos(x, y + 64); //+ is Y start. To prevent overlay on top of the power bar thing
	can->DrawTextW(FString{ const_cast<wchar_t*>(msg.c_str()) }, 1, 0.8f, 0.8f, nullptr);
}

int line = 0;


/// <summary>
/// Function that is called when ProcessEvent is hooked.
/// </summary>
/// <param name="Context"></param>
/// <param name="Function"></param>
/// <param name="Parms"></param>
/// <param name="Result"></param>
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	if (!strcmp(Function->GetFullName(), "Function SFXGame.BioHUD.PostRender"))
	{
		line = 0;
		auto hud = reinterpret_cast<ABioHUD*>(Context);
		if (hud != nullptr)
		{
			// Render mem usage
			auto cameras = FindObjectsOfType(ACamera::StaticClass());
			for (int i = 0; i < cameras.Count; i++)
			{
				auto camera = reinterpret_cast<ACamera*>(cameras.Data[i]);
				/*if (FOVIncreasing)
				{
					FOVCurrent += FOVStep;
					if (FOVCurrent > FOVMax)
						FOVIncreasing = false;
				}
				else
				{
					FOVCurrent -= FOVStep;
					if (FOVCurrent < FOVMin)
						FOVIncreasing = true;
				}*/
				/*camera->SetFOV(FOVCurrent);
				camera->CamPostProcessSettings.bEnableVignette = false;
				camera->CamPostProcessSettings.bOverride_EnableVignette = true;
				camera->CamPostProcessSettings.bEnableFilmGrain = false;
				camera->CamPostProcessSettings.bOverride_EnableFilmGrain = true;*/

				wchar_t objectName[512];
				swprintf_s(objectName, 512, L"%hs_%d (%hs) | FOV: %f, Vignette: %s", camera->Name.GetName(), camera->Name.Number - 1, camera->Class->Name.GetName(), camera->GetFOVAngle(), camera->CamPostProcessSettings.bEnableVignette ? L"On" : L"Off");
				RenderTextSLH(objectName, 5.0f, line++ * 12.0f, 255, 255, 0, 1.0, hud->Canvas);
			}

			auto worldinfos = FindObjectsOfType(UBioUIWorld::StaticClass());
			for (int i = 0; i < worldinfos.Count; i++)
			{
				auto bioworld = reinterpret_cast<UBioUIWorld*>(worldinfos.Data[i]);
				wchar_t objectName[512];
				swprintf_s(objectName, 512, L"%hs_%d (%hs) | Vignette: %s", bioworld->Name.GetName(), bioworld->Name.Number - 1, bioworld->Class->Name.GetName(), bioworld-> bioworld->m_CurrentPostProcessSettings.bEnableVignette ? L"On" : L"Off");
				RenderTextSLH(objectName, 5.0f, line++ * 12.0f, 255, 255, 0, 1.0, hud->Canvas);
			}
		}
	}

	ProcessEvent_orig(Context, Function, Parms, Result);
}

// ======================================================================


SPI_IMPLEMENT_ATTACH
{

	INIT_CHECK_SDK();
	INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);
}

SPI_IMPLEMENT_DETACH
{
	//Common::CloseConsole();
	return true;
}
