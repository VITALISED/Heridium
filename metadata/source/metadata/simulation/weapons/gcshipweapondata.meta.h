#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/reality/stats/gcstatstypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/weapons/gcremoteweapons.meta.h"

class cGcShipWeaponData
{
public:
    static const unsigned __int64 muNameHash = 0x73BA1311CF8E1962;
    static const unsigned __int64 muTemplateHash = 0x22F67703D63F082D;
    static const int miNumMembers = 10;

    TkID<128> mProjectile;
    cGcStatsTypes mStat;
    bool mbIsProjectile;
    TkID<128> mReticle;
    float mfAutoAimAngle;
    float mfAutoAimExtraAngle;
    bool mbShowOverheatSwitch;
    float mfOverheatCoolTime;
    float mfCoolRate;
    cGcRemoteWeapons mRemoteType;

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
