#pragma once
#include "pch.h"

class cGcDamageType;

enum eHitType
{
    EHitType_Shootable = 0,
    EHitType_Terrain = 1,
    EHitType_Generic = 2,
};

class cGcMessageProjectileImpact
{
public:
    static const unsigned __int64 muNameHash = 0x7EBC25FE326CF24B;
    static const unsigned __int64 muTemplateHash = 0xB7A09FEF0808E840;
    static const int miNumMembers = 12;

    TkID<128> mId;
    int miDamage;
    cGcDamageType mType;
    bool mbCritical;
    bool mbIneffective;
    bool mbLaserHeatBoost;
    TkHandle mNode;
    eHitType meHitType;
    cTkVector3 mPosLocal;
    cTkVector3 mPosOffset;
    cTkDynamicArray<cGcImpactCombatEffectData1> maCombatEffects;
    cTkDynamicArray<cGcCombatEffectDamageMultiplier1> maDamageMultipliers;

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
