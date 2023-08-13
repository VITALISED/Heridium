#pragma once

#include "../../../../../../../pch.h"
class cGcPlayerSpaceshipEngineData
{
    static const unsigned __int64 muNameHash = 2019337777868415521;
    static const unsigned __int64 muTemplateHash = 9689133825186207505;
    static const int miNumMembers = 29;

    float mfThrustForce;
    float mfMaxSpeed;
    float mfMinSpeed;
    float mfFalloff;
    float mfMinSpeedForce;
    float mfBoostThrustForce;
    float mfBoostMaxSpeed;
    float mfBoostFalloff;
    float mfBoostingTurnDamp;
    float mfDirectionBrakeMin;
    float mfDirectionBrake;
    float mfReverseBrake;
    float mfOverspeedBrake;
    float mfLowSpeedTurnDamper;
    float mfTurnBrakeMin;
    float mfTurnBrakeMax;
    float mfTurnStrength;
    float mfRollAmount;
    float mfRollForce;
    float mfRollAutoTime;
    float mfBalanceTimeMin;
    float mfBalanceTimeMax;
    float mfFollowProportionalGain;
    float mfFollowDerivativeGain;
    float mfFollowIntegralGain;
    float mfFollowProportionalLimit;
    float mfFollowDerivativeLimit;
    float mfFollowIntegralLimit;
    float mfFollowIntegralDecay;

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
