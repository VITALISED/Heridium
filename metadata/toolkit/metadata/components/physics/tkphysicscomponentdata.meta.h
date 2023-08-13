#pragma once

#include "../../../../../../../pch.h"
class cTkPhysicsData;
class cTkVolumeTriggerType;

enum eSurfaceProperties
{
    ESurfaceProperties_None = 0,
    ESurfaceProperties_Glass = 1,
};

class cTkPhysicsComponentData
{
    static const unsigned __int64 muNameHash = 14233169776136012911;
    static const unsigned __int64 muTemplateHash = 2723903694990249806;
    static const int miNumMembers = 18;

    cTkPhysicsData mData;
    cTkClassPointer mRagdollData;
    cTkVolumeTriggerType mTriggerVolumeType;
    eSurfaceProperties meSurfaceProperties;
    bool mbTriggerVolume;
    bool mbClimbable;
    bool mbFloor;
    bool mbIgnoreModelOwner;
    bool mbNoVehicleCollide;
    bool mbNoPlayerCollide;
    bool mbCameraInvisible;
    bool mbInvisibleForInteraction;
    bool mbAllowTeleporter;
    bool mbBlockTeleporter;
    bool mbDisableGravity;
    float mfSpinOnCreate;
    bool mbUseBasePartOptimisation;
    bool mbIsTransporter;

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
