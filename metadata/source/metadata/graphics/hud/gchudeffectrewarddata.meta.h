#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"

class cGcHUDEffectRewardData
{
public:
    static const unsigned __int64 muNameHash = 0x4453C3D28B780FD8;
    static const unsigned __int64 muTemplateHash = 0xA1292A1ED2EC32C9;
    static const int miNumMembers = 11;

    int miNumBoxes;
    float mfBoxAnimTime;
    float mfBoxRotate;
    float mfBoxAnimTimeBetweenBoxes;
    cTkCurveType mBoxAnimTimeCurve;
    cTkVector2 mBoxSizeStart;
    float mfBoxThicknessStart;
    cTkColour mBoxColourStart;
    cTkVector2 mBoxSizeEnd;
    cTkColour mBoxColourEnd;
    float mfBoxThicknessEnd;

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
