#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/physics/tkphysicsdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/components/physics/tkvolumetriggertype.meta.h"

class cTkStaticPhysicsComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x4955878C6E8051DB;
    static const unsigned __int64 muTemplateHash = 0x99BA278E9CAE3BE9;
    static const int miNumMembers = 9;

    cTkPhysicsData mData;
    bool mbAddToWorldOnPrepare;
    bool mbAddToWorldImmediately;
    cTkVolumeTriggerType mTriggerVolumeType;
    bool mbTriggerVolume;
    bool mbClimbable;
    bool mbNoVehicleCollide;
    bool mbNoPlayerCollide;
    bool mbCameraInvisible;

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
