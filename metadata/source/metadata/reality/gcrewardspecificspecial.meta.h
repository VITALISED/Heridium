#pragma once
#include "../../../../pch.h"

class cGcRewardSpecificSpecial
{
public:
    static const unsigned __int64 muNameHash = 0xCF9FC45A7B70BB85;
    static const unsigned __int64 muTemplateHash = 0x7FEE336B2C12D2D8;
    static const int miNumMembers = 5;

    TkID<128> mID;
    TkID<256> mMessage;
    bool mbShowSpecialProductPopup;
    bool mbUseSpecialFormatting;
    TkID<256> mMilestoneRewardOverrideText;

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
