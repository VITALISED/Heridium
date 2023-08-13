#pragma once

#include "../../../../../../../pch.h"
class cTkCurveType;
class cTkCurveType;

class cTkNGuiRectanglePulseEffect
{
    static const unsigned __int64 muNameHash = 17082379118374336343;
    static const unsigned __int64 muTemplateHash = 13761456246311192813;
    static const int miNumMembers = 5;

    float mfPulseWidth;
    float mfPulseOffset;
    float mfPulseRate;
    cTkCurveType mPulseAlphaCurve;
    cTkCurveType mPulseSizeCurve;

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