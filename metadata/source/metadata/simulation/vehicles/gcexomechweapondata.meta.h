#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/vehicles/gcmechweaponlocation.meta.h"

class cGcExoMechWeaponData
{
public:
    static const unsigned __int64 muNameHash = 0xAB111A88D43A92B4;
    static const unsigned __int64 muTemplateHash = 0x34E79E36B5462BA;
    static const int miNumMembers = 10;

    cTkDynamicArray<cGcMechWeaponLocation> maLocationPriority;
    float mfMaintainFireLocationMinTime;
    cTkFixedArray<TkID<128>, 4> maMuzzleFlashDataID;
    float mfAngleToleranceForArmAiming;
    float mfCooldownTimeMin;
    float mfCooldownTimeMax;
    float mfSelectionWeight;
    float mfMinRange;
    float mfMaxRange;
    float mfAttackAngle;

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
