#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../metadata/source/metadata/reality/stats/gcstatsbonus.meta.h"

class cGcPlayerWeaponBiomeProperties
{
public:
    static const unsigned __int64 muNameHash = 0x7F61AD955291D8A9;
    static const unsigned __int64 muTemplateHash = 0x7B5757AA4A71E8A4;
    static const int miNumMembers = 14;

    cGcBiomeType mBiome;
    TkID<128> mMuzzleIdleAnimId;
    TkID<128> mMuzzleFireAnimId;
    TkID<128> mMuzzleChargedAnimId;
    TkID<128> mMuzzleIdleParticlesId;
    TkID<128> mMuzzleFireParticlesId;
    TkID<128> mMuzzleChargedParticlesId;
    TkID<128> mWeaponIdleAnimId;
    TkID<128> mWeaponFireAnimId;
    TkID<128> mWeaponChargedAnimId;
    TkID<128> mWeaponFireParticlesId;
    TkID<128> mProjectile;
    cTkColour mUpgradeColourOverride;
    cTkDynamicArray<cGcStatsBonus> maStatBonusesOverride;

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
