#pragma once

#include "../../../../../../../../pch.h"
class cGcCurrency;

class cGcMissionSequenceCollectMoney
{
    static const unsigned __int64 muNameHash = 9483139295841560172;
    static const unsigned __int64 muTemplateHash = 10675411207861059566;
    static const int miNumMembers = 9;

    cTkFixedString<128,char> macMessage;
    int miAmount;
    cGcCurrency mCollectCurrency;
    bool mbTakeAmountFromSeasonData;
    bool mbApplyDifficultyScaling;
    cTkFixedString<128,char> macDebugText;
    TkID<128> mForItemID;
    int miForItemQuantity;
    bool mbDiscountAlreadyAcquiredForItems;

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
