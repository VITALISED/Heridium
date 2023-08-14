#pragma once
#include "../../../../../pch.h"

enum eSentinelMechWeaponMode
{
    ESentinelMechWeaponMode_Gun = 0,
    ESentinelMechWeaponMode_Canon = 1,
    ESentinelMechWeaponMode_Flamethrower = 2,
};

class cGcSentinelMechWeaponMode
{
public:
    static const unsigned __int64 muNameHash = 0xF404ECE05A6AC5B7;
    static const unsigned __int64 muTemplateHash = 0x1D77A254B2256815;
    static const int miNumMembers = 1;

    eSentinelMechWeaponMode meSentinelMechWeaponMode;

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
