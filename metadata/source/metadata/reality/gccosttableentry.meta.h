#pragma once
#include "../../../../pch.h"

class cGcCostTableEntry
{
public:
    static const unsigned __int64 muNameHash = 0x5923C0EE4B9AD427;
    static const unsigned __int64 muTemplateHash = 0x2584AB024B6EDC1F;
    static const int miNumMembers = 11;

    TkID<128> mId;
    bool mbDisplayCost;
    bool mbDontCharge;
    bool mbHideOptionAndDisplayCostOnly;
    bool mbDisplayOnlyCostIfCantAfford;
    bool mbHideCostStringIfCanAfford;
    bool mbRemoveOptionIfCantAfford;
    bool mbMustAffordInCreative;
    TkID<256> mCannotAffordOSDMsg;
    TkID<128> mMissionMessageWhenCharged;
    cTkClassPointer mCost;

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
