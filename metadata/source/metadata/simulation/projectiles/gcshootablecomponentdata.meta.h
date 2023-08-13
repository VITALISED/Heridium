#pragma once
#include "../../../../../../../pch.h"

class cGcProjectileImpactType;
class cGcFiendCrime;

class cGcShootableComponentData
{
    static const unsigned __int64 muNameHash = 0x387AC5FC8E642A15;
    static const unsigned __int64 muTemplateHash = 0x879D011DADF3E614;
    static const int miNumMembers = 25;

    int miHealth;
    bool mbAutoAimTarget;
    bool mbPlayerOnly;
    bool mbIgnorePlayer;
    bool mbImpactShake;
    TkID<128> mImpactShakeEffect;
    cGcProjectileImpactType mForceImpactType;
    int miIncreaseWanted;
    float mfIncreaseWantedThresholdTime;
    cGcFiendCrime mFiendCrimeType;
    float mfFiendCrimeModifier;
    float mfRepairTime;
    int miMinDamage;
    bool mbStaticUntilShot;
    bool mbIgnoreHitPush;
    bool mbHitEffectEnabled;
    bool mbHitEffectEntireModel;
    bool mbIsArmoured;
    bool mbCouldCountAsArmourForParent;
    bool mbIgnoreTerrainEditKills;
    cTkFixedString<32,char> macNameOverride;
    TkID<128> mRequiredTech;
    TkID<128> mDamageMultiplier;
    bool mbIsPiercable;
    bool mbIsAffectedByPiercing;

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
