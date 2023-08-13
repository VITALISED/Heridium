#pragma once
#include "../../../../../../../pch.h"

class cGcStatsTypes;
class cGcRemoteWeapons;

class cGcShipWeaponData
{
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
