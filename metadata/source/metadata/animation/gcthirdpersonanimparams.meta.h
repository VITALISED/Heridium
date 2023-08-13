#pragma once

#include "../../../../../../pch.h"
class cGcThirdPersonAnimParams
{
    static const unsigned __int64 muNameHash = 3072370619399020205;
    static const unsigned __int64 muTemplateHash = 5450316746769854773;
    static const int miNumMembers = 20;

    cTkVector2 mVelocity;
    cTkVector2 mVelocityXY;
    float mfVelocityY;
    float mfVelocityZ;
    cTkVector2 mMoveForce;
    float mfMoveForceApplied;
    cTkVector2 mAimDirection;
    float mfSpeed;
    float mfFoot;
    float mfHitLR;
    float mfHitFB;
    float mfLeanLR;
    float mfLeanFB;
    float mfAimPitch;
    float mfAimYaw;
    float mfTurnAngle;
    float mfDistanceFromGround;
    float mfUphill;
    float mfSlopeAngle;
    float mfTimeSinceJetpackEngaged;

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
