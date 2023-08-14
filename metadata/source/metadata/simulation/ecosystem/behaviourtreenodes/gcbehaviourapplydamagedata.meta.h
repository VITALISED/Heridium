#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboarddefaultvalueid.meta.h"
#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboarddefaultvaluefloat.meta.h"
#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboarddefaultvaluevector.meta.h"

class cGcBehaviourApplyDamageData
{
public:
    static const unsigned __int64 muNameHash = 0x88EF02AAFC25BCE6;
    static const unsigned __int64 muTemplateHash = 0xB185E9E89F4E3649;
    static const int miNumMembers = 3;

    cTkBlackboardDefaultValueId mPlayerDamageType;
    cTkBlackboardDefaultValueFloat mRadius;
    cTkBlackboardDefaultValueVector mOffset;

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
