#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../metadata/source/metadata/reality/tables/gcwordcategorytableenum.meta.h"

class cGcRewardTeachWord
{
public:
    static const unsigned __int64 muNameHash = 0xFE5851C36CE8242F;
    static const unsigned __int64 muTemplateHash = 0xFC048D8A45E3409;
    static const int miNumMembers = 5;

    cGcAlienRace mRace;
    bool mbUseCategory;
    cgcwordcategorytableEnum mCategory;
    int miAmountMin;
    int miAmountMax;

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
