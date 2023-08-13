#pragma once
#include "pch.h"

class cGcCreatureFiendAttackData
{
public:
    static const unsigned __int64 muNameHash = 0x41B161469E53B05E;
    static const unsigned __int64 muTemplateHash = 0xD4A53608778A385B;
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
