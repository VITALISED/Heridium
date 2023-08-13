#pragma once

#include "../../../../../../pch.h"
enum eSignalScanType
{
    ESignalScanType_None = 0,
    ESignalScanType_DropPod = 1,
    ESignalScanType_Shelter = 2,
    ESignalScanType_Search = 3,
    ESignalScanType_Relic = 4,
    ESignalScanType_Industrial = 5,
    ESignalScanType_Alien = 6,
    ESignalScanType_CrashedFreighter = 7,
};

class cGcRewardSignalScan
{
    static const unsigned __int64 muNameHash = 17124300907104941807;
    static const unsigned __int64 muTemplateHash = 9513095108418250654;
    static const int miNumMembers = 1;

    eSignalScanType meSignalScanType;

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
