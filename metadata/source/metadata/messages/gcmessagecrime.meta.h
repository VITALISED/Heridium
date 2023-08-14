#pragma once
#include "../../../../pch.h"

enum eCrime
{
    ECrime_AttackCreature = 0,
    ECrime_AttackSentinel = 1,
    ECrime_AttackSentinelLaser = 2,
    ECrime_KillCreature = 3,
    ECrime_KillSentinel = 4,
    ECrime_MineResources = 5,
    ECrime_HitResources = 6,
    ECrime_AttackSpaceStation = 7,
    ECrime_AttackShip = 8,
    ECrime_AttackPolice = 9,
    ECrime_KillShip = 10,
    ECrime_KillPolice = 11,
    ECrime_TimedShootable = 12,
};

class cGcMessageCrime
{
public:
    static const unsigned __int64 muNameHash = 0xC64AF7F76101CD0;
    static const unsigned __int64 muTemplateHash = 0x6C85ED98FDA49EF4;
    static const int miNumMembers = 5;

    eCrime meCrime;
    cTkVector3 mPosition;
    TkHandle mCriminal;
    TkHandle mVictim;
    int miValue;

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
