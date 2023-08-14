#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/tables/gcwordcategorytableenum.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcMissionConditionWordCategoryKnown
{
public:
    static const unsigned __int64 muNameHash = 0xC1BA5468EA0625B9;
    static const unsigned __int64 muTemplateHash = 0xC5F87D79D6A96A8A;
    static const int miNumMembers = 2;

    cgcwordcategorytableEnum mCategory;
    cGcAlienRace mRace;

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
