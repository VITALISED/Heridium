#pragma once
#include "../../../../../../../../pch.h"

class cTkCurveType;

class cGcCameraWarpSettings
{
    static const unsigned __int64 muNameHash = 0x72EE2F7B202E1811;
    static const unsigned __int64 muTemplateHash = 0x910D11CA9F5339A1;
    static const int miNumMembers = 21;

    float mfFocusPointDist;
    float mfOffsetZFrequency_1;
    float mfOffsetZFrequency_2;
    float mfOffsetZPhase_1;
    float mfOffsetZPhase_2;
    float mfOffsetZStartBias;
    float mfOffsetZBias;
    float mfOffsetZRange;
    float mfOffsetYFrequency_1;
    float mfOffsetYFrequency_2;
    float mfOffsetYPhase_1;
    float mfOffsetYPhase_2;
    float mfOffsetYStartBias;
    float mfOffsetYBias;
    float mfOffsetYRange;
    float mfOffsetXFrequency;
    float mfOffsetXPhase;
    float mfOffsetXRange;
    cTkCurveType mOffsetXCurve;
    float mfRollRange;
    float mfYawnRange;

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
