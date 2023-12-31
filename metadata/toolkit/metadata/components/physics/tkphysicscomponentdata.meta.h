#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/physics/tkphysicsdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/components/physics/tkvolumetriggertype.meta.h"

enum eSurfaceProperties
{
    ESurfaceProperties_None = 0,
    ESurfaceProperties_Glass = 1,
};

class cTkPhysicsComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xC58660803669C46F;
    static const unsigned __int64 muTemplateHash = 0x25CD3FFA8E448F4E;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
