#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionsubstanceenum.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcitemneedpurpose.meta.h"

class cGcMissionSequenceCollectSubstance
{
public:
    static const unsigned __int64 muNameHash = 0x84D6228673F661A6;
    static const unsigned __int64 muTemplateHash = 0x719B3F025CECFCC;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
