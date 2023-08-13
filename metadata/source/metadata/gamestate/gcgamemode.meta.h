#pragma once
#include "../../../../../../pch.h"

enum ePresetGameMode
{
    EPresetGameMode_Unspecified = 0,
    EPresetGameMode_Normal = 1,
    EPresetGameMode_Creative = 2,
    EPresetGameMode_Survival = 3,
    EPresetGameMode_Ambient = 4,
    EPresetGameMode_Permadeath = 5,
    EPresetGameMode_Seasonal = 6,
};

class cGcGameMode
{
    static const unsigned __int64 muNameHash = 0x2BFE76ABF5398879;
    static const unsigned __int64 muTemplateHash = 0xC75E9B9C8ED95CD4;
    static const int miNumMembers = 1;

    ePresetGameMode mePresetGameMode;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
