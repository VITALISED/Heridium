#pragma once

#include "../../../../../../../pch.h"
class cGcGalaxyCameraData
{
    static const unsigned __int64 muNameHash = 8564232984467542029;
    static const unsigned __int64 muTemplateHash = 13756012376020897762;
    static const int miNumMembers = 27;

    float mfCameraFOV;
    float mfMovementBlendRateFree;
    float mfMovementBlendRateLocked;
    float mfMovementBlendRateLookLocked;
    float mfLockTransitionRate;
    float mfLockedSpinSpeed;
    float mfLockedScaledPushSpeed;
    float mfLockedScaledElevationSpeed;
    float mfFreePanSpeed;
    float mfFreePanSpeedTurbo;
    float mfFreeUpDownSpeed;
    float mfFreeUpDownSpeedTurbo;
    float mfFreeRotateSpeed;
    float mfFreeElevationBlendRate;
    float mfZoomOutSpin;
    float mfZoomOutElevation;
    float mfZoomOutPushDist;
    float mfZoomOutRate;
    float mfZoomInRate;
    float mfMinZoomDistance;
    float mfMaxZoomDistance;
    float mfMinPushingZoomDistance;
    float mfMinPushingZoomDistanceScaler;
    float mfCameraShakeDriftClip;
    float mfCameraShakeDriftShift;
    float mfCameraShakeSmoothingRate;
    float mfCameraShakeMaximum;

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
