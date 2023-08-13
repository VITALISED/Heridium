#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureFiendAttackData
{
    static const unsigned __int64 muNameHash = 4733671639274991710;
    static const unsigned __int64 muTemplateHash = 15322712717191166043;
    static const int miNumMembers = 20;

    float mfNearDist;
    float mfFarDist;
    float mfModifyDistanceForHeight;
    TkID<128> mSpitAnim;
    int miSpitAnimFrame;
    cTkFixedString<64,char> macSpitJoint;
    TkID<128> mSpitProjectile;
    bool mbAllowSpit;
    float mfDelayBetweenSpitAttacks;
    bool mbAllowPounce;
    float mfDelayBetweenPounceAttacks;
    cTkFixedString<64,char> macAttackLight;
    float mfIdleLightIntensity;
    float mfAttackLightIntensity;
    int miMinFlurryHits;
    int miMaxFlurryHits;
    float mfRoarChanceOnHit;
    float mfRoarChanceOnMiss;
    float mfStartDamageTime;
    float mfTurnToFaceTime;

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
