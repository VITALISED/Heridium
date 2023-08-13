#pragma once
#include "../../../../../../pch.h"

enum eScannerRechargeDifficulty
{
    EScannerRechargeDifficulty_VeryFast = 0,
    EScannerRechargeDifficulty_Fast = 1,
    EScannerRechargeDifficulty_Normal = 2,
    EScannerRechargeDifficulty_Slow = 3,
};

class cGcScannerRechargeDifficultyOption
{
    static const unsigned __int64 muNameHash = 0x5980B3D90F168F60;
    static const unsigned __int64 muTemplateHash = 0x2C77C6A1D7CCA517;
    static const int miNumMembers = 1;

    eScannerRechargeDifficulty meScannerRechargeDifficulty;

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
