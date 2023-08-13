#pragma once

#include "../../../../../../../pch.h"
class cTkCurveType;

class cTkAnimAnimNode
{
    static const unsigned __int64 muNameHash = 17038069634400979135;
    static const unsigned __int64 muTemplateHash = 12989634905477904158;
    static const int miNumMembers = 6;

    TkID<128> mNodeId;
    TkID<128> mAnimId;
    cTkFixedString<64,char> macPhaseIn;
    cTkCurveType mPhaseCurve;
    float mfPhaseRangeBegin;
    float mfPhaseRangeEnd;

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
