#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureSwarmDataParams
{
    static const unsigned __int64 muNameHash = 7574798444458838138;
    static const unsigned __int64 muTemplateHash = 8920354983111798262;
    static const int miNumMembers = 36;

    cTkDynamicArray<TkID<256> > maValidDescriptors;
    float mfCoherence;
    float mfAlignment;
    float mfSeparateStrength;
    float mfSpacing;
    float mfFollow;
    float mfRange;
    float mfMaxBankingAmount;
    float mfTurnRequiredForMaxBanking;
    float mfMaxPitchAmount;
    float mfUpwardMovementForMaxPitch;
    float mfFaceMoveDirStrength;
    bool mbFaceMoveDirYawOnly;
    bool mbCanLand;
    float mfLandAdjustDist;
    float mfLandClampBegin;
    float mfLandSlowDown;
    float mfTakeOffTime;
    float mfTakeOffStartSpeed;
    float mfTakeOffUpwardBoost;
    bool mbCanWalk;
    float mfWalkSpeed;
    float mfWalkTurnTime;
    float mfFlyTimeMin;
    float mfFlyTimeMax;
    float mfLandTimeMin;
    float mfLandTimeMax;
    float mfLandIdleTimeMin;
    float mfLandIdleTimeMax;
    float mfLandWalkTimeMin;
    float mfLandWalkTimeMax;
    float mfMaxSpeed;
    float mfAlignTime;
    float mfBankingTime;
    float mfSpringSmoothTime;
    bool mbApplyScaleToSpeed;

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
