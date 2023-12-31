#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionsubstanceenum.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcitemneedpurpose.meta.h"

class cGcMissionConditionHasSubstance
{
public:
    static const unsigned __int64 muNameHash = 0x9D5EE4FB6274CF9E;
    static const unsigned __int64 muTemplateHash = 0x1397D03F597B56A3;
    static const int miNumMembers = 5;

    cGcDefaultMissionSubstanceEnum mDefault;
    TkID<128> mSubstance;
    int miAmount;
    bool mbTakeAmountFromSeasonData;
    cGcItemNeedPurpose mPurpose;

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
