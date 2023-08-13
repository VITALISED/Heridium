#pragma once

#include "../../../../../../../../pch.h"
class cGcDefaultMissionSubstanceEnum;
class cGcItemNeedPurpose;

class cGcMissionSequenceCollectSubstance
{
    static const unsigned __int64 muNameHash = 9571876018889056678;
    static const unsigned __int64 muTemplateHash = 511637876691095500;
    static const int miNumMembers = 13;

    cTkFixedString<128,char> macMessage;
    cGcDefaultMissionSubstanceEnum mDefault;
    TkID<128> mSubstance;
    int miAmountMin;
    int miAmountMax;
    bool mbWaitForSelected;
    TkID<128> mForBuild;
    TkID<128> mForRepair;
    cGcItemNeedPurpose mPurpose;
    bool mbFromNow;
    bool mbTakeAmountFromSeasonData;
    bool mbSearchCookingIngredients;
    cTkFixedString<128,char> macDebugText;

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
