#pragma once
#include "../../../../../../pch.h"

class cGcCameraFollowSettings
{
public:
    static const unsigned __int64 muNameHash = 0x200FDA306DC86654;
    static const unsigned __int64 muTemplateHash = 0xDF33D9C6EF3F5AF1;
    static const int miNumMembers = 61;

    TkID<128> mName;
    float mfMinSpeed;
    float mfSpeedRange;
    float mfOffsetX;
    float mfOffsetY;
    float mfOffsetYAlt;
    float mfOffsetYSlopeExtra;
    float mfOffsetZFlat;
    float mfBackMinDistance;
    float mfBackMaxDistance;
    float mfBackSlopeAdjust;
    float mfBackSlopeRotationAdjust;
    float mfUpMinDistance;
    float mfUpMaxDistance;
    float mfUpSlopeAdjust;
    float mfLeftMinDistance;
    float mfLeftMaxDistance;
    float mfOffsetYExtraMaxDistance;
    float mfPanNear;
    float mfPanFar;
    float mfUpGamma;
    float mfHorizRotationAngleMaxPerFrame;
    float mfVertRotationSpeed;
    float mfVertRotationMin;
    float mfVertRotationMax;
    float mfVertRotationOffset;
    float mfVertRotationOffsetMinAngle;
    float mfVertRotationOffsetMaxAngle;
    bool mbVertStartLookingDown;
    float mfDistSpeed;
    float mfDistSpeedOutsideMainRange;
    float mfDistStiffness;
    float mfSpringSpeed;
    bool mbLockToObjectOnIdle;
    float mfCenterStartTime;
    float mfCenterBlendTime;
    float mfCenterMaxSpring;
    float mfCenterMaxSpeed;
    float mfVelocityAnticipate;
    float mfVelocityAnticipateSpringSpeed;
    float mfVertMaxSpring;
    float mfCenterStartSpeed;
    float mfLookStickLimitAngle;
    bool mbEnableCollisionDetection;
    int miNumLRProbes;
    float mfLRProbesRange;
    float mfLRProbesRadius;
    int miNumUDProbes;
    float mfUDProbesRange;
    float mfProbeCenterX;
    float mfProbeCenterY;
    float mfPushForwardDropoffLR;
    float mfPushForwardDropoffUD;
    float mfAvoidCollisionLRSpeed;
    float mfAvoidCollisionUDSpeed;
    float mfAvoidCollisionPushSpeed;
    bool mbAvoidCollisionUDUseStickDelay;
    bool mbAvoidCollisionLRUseStickDelay;
    bool mbUseSpeedBasedSpring;
    bool mbUseCustomBlendTime;
    float mfCustomBlendTime;

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
