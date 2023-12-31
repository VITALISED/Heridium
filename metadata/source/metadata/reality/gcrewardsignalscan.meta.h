#pragma once
#include "../../../../pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0xEDA5BCF252E3B6EF;
    static const unsigned __int64 muTemplateHash = 0x84054D993BC6A79E;
    static const int miNumMembers = 1;

    eSignalScanType meSignalScanType;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
