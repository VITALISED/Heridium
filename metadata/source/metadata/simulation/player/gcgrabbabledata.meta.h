#pragma once

#include "../../../../../../../pch.h"
class cGcHand;

enum eGrabType
{
    EGrabType_Default = 0,
    EGrabType_EjectHandle = 1,
    EGrabType_ControlStickLeft = 2,
    EGrabType_ControlStickRight = 3,
};

class cGcGrabbableData
{
    static const unsigned __int64 muNameHash = 17259380718134906211;
    static const unsigned __int64 muTemplateHash = 14207312424927167672;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
