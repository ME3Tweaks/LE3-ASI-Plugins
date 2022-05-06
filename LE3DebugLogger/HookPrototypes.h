#pragma once

#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"
#define MYHOOK "DebugLogger_"

struct FPackageFileCache;
bool hookLoggingFunctions(ISharedProxyInterface* interface_ptr);


typedef bool (*tFPackageFileCacheFindPackageFile) (wchar_t* packageName, FGuid* guid, FString& OutFileName, wchar_t* language, bool unknown);
typedef wchar_t** (*tFPackageFileCacheGetPackageFileList) (FPackageFileCache* cache, wchar_t* FileName);

// Used to lookup packages. Fully native
struct FPackageFileCache
{
    virtual void Unknown0() = 0;
    virtual void Unknown1() = 0;
    // Finds a package file by name
    virtual bool FindPackageFile(wchar_t* packageName, FGuid* guid, FString& OutFileName, wchar_t* language, bool unknown) = 0;
    // Returns list of packages. In shipping build of game this just says this method shouldn't be called
    virtual TArray<FString> GetPackageFileList(TArray<FString> outData) = 0;
    // Not sure on the parameters for this func. It's never called by game directly. Just prints out shouldn't happen in ship
    virtual TArray<FString> GetPackageNameList(TArray<FString> outData) = 0;
};

// Todo: This is only accurate in DRM free; there needs to be a way to find this address dynamically
// The address at this location points to the static GPackageFileCache object pointer
#define GPackageFileCacheOffset 0x7ff74c08dab0;
FPackageFileCache* GPackageFileCache = nullptr; // Have to assign a bit after game startup

// Used to lookup packages. Fully native
struct FFileManager
{
    virtual void Unknown0() = 0;
    virtual void Unknown1() = 0;
    virtual void Unknown2() = 0;
    virtual void Unknown3() = 0;
    virtual void Unknown4() = 0;
    virtual void Unknown5() = 0;
    virtual void Unknown6() = 0;
    virtual void Unknown7() = 0;
    virtual void Unknown8() = 0;
    virtual void Unknown9() = 0;
    virtual void Unknown10() = 0;
    virtual void Unknown11() = 0;
    virtual void Unknown12() = 0;
    virtual void Unknown13() = 0;
    virtual void Unknown14() = 0;
    virtual void Unknown15() = 0;
    virtual void Unknown16() = 0;
    virtual void Unknown17() = 0;
    virtual void Unknown18() = 0;
    virtual void Unknown19() = 0;
    virtual void Unknown20() = 0;
    virtual void Unknown21() = 0;
    virtual void Unknown22() = 0;
    virtual void Unknown23() = 0;
    virtual void Unknown24() = 0;
    virtual void Unknown25() = 0;
    virtual void Unknown26() = 0;
    virtual void Unknown27() = 0;
    virtual void Unknown28() = 0;
    virtual void Unknown29() = 0;

	virtual WCHAR** GetLoadingFileName(void* something) = 0;
};

FFileManager* GFileManager = nullptr;

// Used to load packages
struct UnLinker
{
    virtual void Unknown0() = 0;
    wchar_t* PackageName;
    //virtual void Unknown3() = 0;
    //virtual void Unknown4() = 0;
    //virtual void Unknown5() = 0;
    //virtual void Unknown6() = 0;
    //virtual void Unknown7() = 0;
    //virtual void Unknown8() = 0;
    //virtual void Unknown9() = 0;
    //virtual void Unknown10() = 0;
    //virtual void Unknown11() = 0;
    //virtual void Unknown12() = 0;
    //virtual void Unknown13() = 0;
    INT NameCount1; // IDK
    INT NameCount2; // IDK
    FGuid PackageGuid;
	ULinkerLoad* Linker;
    TArray<void*> CompletionCallbacks;
    INT ImportIndex;
    INT ExportIndex;
    INT PreLoadIndex;
    INT PostLoadIndex;
    FLOAT TimeLimit;
    BOOL bUseTimeLimit;
    BOOL bTimeLimitExceeded;
    DOUBLE TickStartTime;
    //UObject* LastObjectWorkWasPeformedOn;
    //TCHAR* LastTypeOfWorkPerformed;
    //DOUBLE LoadStartTime;
    //FLOAT LoadPercentage;
    //BOOL bHasFinishedExportGuids;

    FLOAT Load1;
    FLOAT Load2;
    FLOAT Load3;
    FLOAT Load4;
    FLOAT Load5;
    FLOAT Load6;
    FLOAT Load7;
    FLOAT EstimatedLoadPercentage;

};

// UTILITY METHODS

// Searches for the specified byte pattern, which is a 7-byte mov or lea instruction, with the 'source' operand being the address being calculated
void* findAddressLeaMov(ISharedProxyInterface* InterfacePtr, char* name, char* bytePattern)
{
    void* patternAddr;
    if (const auto rc = InterfacePtr->FindPattern(&patternAddr, bytePattern);
        rc != SPIReturn::Success)
    {
        writeln(L"Failed to find %hs pattern: %d / %s", name, rc, SPIReturnToString(rc));
        return nullptr; // Will be 0
    }

    // This is the address of the instruction
    const auto instruction = static_cast<BYTE*>(patternAddr);
    const auto RIPaddress = instruction + 7; // Relative Instruction Pointer (after instruction)
    const auto offset = *reinterpret_cast<int32_t*>(instruction + 3); // Offset listed in the instruction
    return RIPaddress + offset; // Added together we get the actual address
}

// Loads commonly used class pointers
void LoadCommonClassPointers(ISharedProxyInterface* InterfacePtr)
{
    // 0x7ff74a9df82d DRM free | MOV RCX, qword ptr [GFileManager]
    auto addr = findAddressLeaMov(InterfacePtr, "GFileManager", "48 8b 0d 9c dd 67 01 ff d3 90 4c 89 6c 24 60 48 8b 4c 24 58");
    if (addr != nullptr)
    {
        GFileManager = static_cast<FFileManager*>(addr);
        writeln("Found GFileManager at %p", GFileManager);
    }

    // 0x7ff74b427377 DRM free | MOV RCX, qword ptr [GPackageFileCache]
    addr = findAddressLeaMov(InterfacePtr, "GPackageFileCache", "48 8b 0d 32 67 c6 00 ff d7 85 c0 40 0f 94 c7 48 c7 45 88 00 00 00 00");
    if (addr != nullptr)
    {
        GPackageFileCache = static_cast<FPackageFileCache*>(addr);
        writeln("Found GPackageFileCache at %p", GPackageFileCache);
    }
}