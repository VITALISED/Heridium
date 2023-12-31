#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/player/gchand.meta.h"

enum eGrabType
{
    EGrabType_Default = 0,
    EGrabType_EjectHandle = 1,
    EGrabType_ControlStickLeft = 2,
    EGrabType_ControlStickRight = 3,
};

class cGcGrabbableData
{
public:
    static const unsigned __int64 muNameHash = 0xEF85A351ABA84D63;
    static const unsigned __int64 muTemplateHash = 0xC52A83607CC704B8;
    static const int miNumMembers = 17;

    cTkFixedString<32,char> macLocatorName;
    float mfGrabRadius;
    float mfAttachTime;
    float mfReleaseRadius;
    float mfDetachTime;
    cGcHand mHand;
    cTkVector2 mRotationLimits;
    bool mbAllowOtherWayUp;
    bool mbAutoGrab;
    float mfToggleGrabTime;
    eGrabType meGrabType;
    TkID<128> mHandPose;
    cTkFixedString<32,char> macMovementStartLocator;
    cTkFixedString<32,char> macMovementEndLocator;
    float mfMovementMaxSpeed;
    float mfMovementReturnSpeed;
    float mfMovementRequiredForActivation;

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
