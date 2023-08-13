#pragma once

#include "../../../../../../../../pch.h"
class cGcCameraShakeCapturedData;
class cGcCameraShakeMechanicalData;

class cGcCameraShakeData
{
    static const unsigned __int64 muNameHash = 4042674337157627623;
    static const unsigned __int64 muTemplateHash = 728303743204032848;
    static const int miNumMembers = 11;

    TkID<128> mName;
    float mfTimeStart;
    float mfTotalTime;
    float mfDecayRate;
    float mfStrengthScale;
    float mfThirdPersonDamp;
    float mfVRStrength;
    cGcCameraShakeCapturedData mCapturedData;
    cGcCameraShakeMechanicalData mMechanicalData;
    float mfFovStrength;
    float mfFovFrequency;

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
