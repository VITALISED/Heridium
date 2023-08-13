#pragma once

#include "../../../../../../../pch.h"
enum eAuthoring
{
    EAuthoring_FixedValue = 0,
    EAuthoring_RandomRangeFloat = 1,
    EAuthoring_Curves = 2,
};
class cTkCurveType;
class cTkCurveType;

class cTkEmitterFloatProperty
{
    static const unsigned __int64 muNameHash = 7983210815863889441;
    static const unsigned __int64 muTemplateHash = 7943347058536028912;
    static const int miNumMembers = 12;

    eAuthoring meAuthoring;
    float mfFixedValue;
    float mfMinRandomValue;
    float mfMaxRandomValue;
    float mfCurveVariation;
    float mfCurveStartValue;
    float mfCurveMidValue;
    float mfCurveEndValue;
    float mfCurveBlendMidpoint;
    cTkCurveType mCurve1Shape;
    cTkCurveType mCurve2Shape;
    cTkClassPointer mNextStage;

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
