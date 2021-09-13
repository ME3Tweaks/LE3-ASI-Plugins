#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <sstream>
#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"
#include "../LE3-SDK/ScreenLogger.h"

#define MYHOOK "LE3SeqActLogEnabler_"

SPI_PLUGINSIDE_SUPPORT(L"LE3SeqActLogEnabler", L"1.0.0", L"HenBagle", SPI_GAME_LE3, SPI_VERSION_ANY);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

ME3TweaksASILogger logger("SeqAct_Log Enabler v1", "SeqActLog.txt");
ScreenLogger screenLogger(L"SeqAct_Log Enabler v1");


std::wstringstream& operator<<(std::wstringstream& ss, const FString& fStr)
{

    for (auto i = 0; i < fStr.Count && fStr(i) != 0; i++)
    {
        ss << fStr(i);
    }
    return ss;
}

// ProcessEvent hook
// ======================================================================
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
    if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated") && Context->IsA(USeqAct_Log::StaticClass()))
    {
        const auto seqLog = reinterpret_cast<USeqAct_Log*>(Context);
        const auto numVarLinks = seqLog->VariableLinks.Count;
        std::wstringstream ss;

        // Todo: Patch the function that removes m_aObjComment
        /*if(seqLog->bOutputObjCommentToScreen == 1ul)
        {
            const auto numLines = seqLog->m_aObjComment.Num();
            for(auto k = 0; k < numLines; k++)
            {
                ss << seqLog->m_aObjComment(k) << " ";
            }
        }*/

        for (auto i = 0; i < numVarLinks; i++)
        {
            const auto numVars = seqLog->VariableLinks(i).LinkedVariables.Count;
            for (auto j = 0; j < numVars; j++)
            {
                auto seqVar = seqLog->VariableLinks(i).LinkedVariables(j);
                if (seqVar->IsA(USeqVar_String::StaticClass()))
                {
                    ss << static_cast<USeqVar_String*>(seqVar)->StrValue << " ";
                }
                else if (seqVar->IsA(USeqVar_Float::StaticClass()))
                {
                    ss << static_cast<USeqVar_Float*>(seqVar)->FloatValue << " ";
                }
                else if (seqVar->IsA(USeqVar_Int::StaticClass()))
                {
                    ss << static_cast<USeqVar_Int*>(seqVar)->IntValue << " ";
                }
                else if (seqVar->IsA(USeqVar_Bool::StaticClass()))
                {
                    ss << (static_cast<USeqVar_Bool*>(seqVar)->bValue ? "True" : "False") << " ";
                }
                else if (seqVar->IsA(USeqVar_Object::StaticClass()))
                {
                    const auto seqVarObj = static_cast<USeqVar_Object*>(seqVar);
                    auto referencedObj = seqVarObj->ObjValue;
                    if (referencedObj != nullptr)
                    {
                        ss << referencedObj->GetName() << " ";
                    }
                }
                else if (seqVar->IsA(USeqVar_Name::StaticClass()))
                {
                    ss << static_cast<USeqVar_Name*>(seqVar)->NameValue.GetName() << " ";
                }
            }

        }
        const wstring msg = ss.str();
        writeln(L"SeqAct_Log: %s", msg.c_str());
        if (msg.size() > 0)
        {
            logger.writeToLog(msg.c_str(), true, true);
            screenLogger.LogMessage(msg);
        }
    }
    else if (!strcmp(Function->GetFullName(), "Function SFXGame.BioHUD.PostRender"))
    {
        const auto hud = static_cast<ABioHUD*>(Context);
        screenLogger.PostRenderer(hud);
    }
    ProcessEvent_orig(Context, Function, Parms, Result);
}



SPI_IMPLEMENT_ATTACH
{
    Common::OpenConsole();

    INIT_CHECK_SDK();
    INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
    INIT_HOOK_PATTERN(ProcessEvent);

    return true;
}

SPI_IMPLEMENT_DETACH
{
    Common::CloseConsole();
    return true;
}
