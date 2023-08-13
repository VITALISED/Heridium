#pragma once

#include "../../../../../../../pch.h"
class cTkCurveType;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;

class cGcInventorySlotActionData
{
    static const unsigned __int64 muNameHash = 13874755057318798038;
    static const unsigned __int64 muTemplateHash = 12364664528215740533;
    static const int miNumMembers = 9;

    bool mbLoops;
    bool mbGlows;
    bool mbScales;
    float mfTime;
    float mfScaleAtMin;
    float mfScaleAtMax;
    cTkCurveType mAnimCurve;
    cGcAudioWwiseEvents mSuitAudio;
    cGcAudioWwiseEvents mActionAudio;

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
