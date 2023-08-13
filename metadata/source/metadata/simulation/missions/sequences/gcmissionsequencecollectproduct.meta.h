#pragma once
#include "pch.h"

class cGcDefaultMissionProductEnum;
class cGcItemNeedPurpose;

class cGcMissionSequenceCollectProduct
{
public:
    static const unsigned __int64 muNameHash = 0x139E6194371FE10E;
    static const unsigned __int64 muTemplateHash = 0x5C89FDE7FA8343D4;
    static const int miNumMembers = 16;

    cTkFixedString<128,char> macMessage;
    cGcDefaultMissionProductEnum mDefault;
    TkID<128> mProduct;
    int miAmountMin;
    int miAmountMax;
    bool mbWaitForSelected;
    TkID<128> mForBuild;
    TkID<128> mForRepair;
    cGcItemNeedPurpose mPurpose;
    bool mbTeachIfNotKnown;
    bool mbFromNow;
    bool mbTakeAmountFromSeasonData;
    bool mbDependentOnSeasonMilestone;
    bool mbHintAtCraftTree;
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
