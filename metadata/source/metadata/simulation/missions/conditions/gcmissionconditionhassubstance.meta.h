#pragma once

#include "../../../../../../../../pch.h"
class cGcDefaultMissionSubstanceEnum;
class cGcItemNeedPurpose;

class cGcMissionConditionHasSubstance
{
    static const unsigned __int64 muNameHash = 11339752680105234334;
    static const unsigned __int64 muTemplateHash = 1411825978706712227;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
