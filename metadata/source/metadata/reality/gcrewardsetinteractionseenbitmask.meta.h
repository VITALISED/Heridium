#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiontype.meta.h"

class cGcRewardSetInteractionSeenBitmask
{
public:
    static const unsigned __int64 muNameHash = 0x719D093BDEC85E0D;
    static const unsigned __int64 muTemplateHash = 0xB947F0E8EA6C4333;
    static const int miNumMembers = 3;

    cGcInteractionType mInteractionType;
    int miOverrideIndex;
    TkID<128> mStat;

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
