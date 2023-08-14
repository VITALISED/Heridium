#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/stats/gcstatvaluedata.meta.h"

class cGcStatLevelData
{
public:
    static const unsigned __int64 muNameHash = 0xECC1CDECFE5FC437;
    static const unsigned __int64 muTemplateHash = 0xFFEFF310D0058C71;
    static const int miNumMembers = 5;

    TkID<256> mLevelName;
    TkID<256> mLevelNameUpper;
    TkID<256> mOSDLevelName;
    cGcStatValueData mValue;
    TkID<128> mTrophyToUnlock;

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
