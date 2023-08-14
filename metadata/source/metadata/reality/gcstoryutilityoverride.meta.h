#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcrewardmissionoverride.meta.h"

class cGcStoryUtilityOverride
{
public:
    static const unsigned __int64 muNameHash = 0xE1C7E19E0F5C0C48;
    static const unsigned __int64 muTemplateHash = 0x51F076B588C99C1D;
    static const int miNumMembers = 3;

    TkID<256> mName;
    TkID<128> mReward;
    cTkDynamicArray<cGcRewardMissionOverride> maSpecificRewardOverrideTable;

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
