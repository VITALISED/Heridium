#pragma once

#include "../../../../../../pch.h"
class cGcCostTableEntry
{
    static const unsigned __int64 muNameHash = 6423189623263646759;
    static const unsigned __int64 muTemplateHash = 2703473702672981023;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
