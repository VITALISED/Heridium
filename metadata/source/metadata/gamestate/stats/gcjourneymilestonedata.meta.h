#pragma once
#include "../../../../../pch.h"

class cGcJourneyMilestoneData
{
public:
    static const unsigned __int64 muNameHash = 0xC35BDABF76750407;
    static const unsigned __int64 muTemplateHash = 0xE8BF2A6A86ADC900;
    static const int miNumMembers = 4;

    TkID<128> mJourneyMilestoneId;
    int miPointsToUnlock;
    TkID<256> mJourneyMilestoneTitle;
    TkID<256> mJourneyMilestoneTitleLower;

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
