#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gccurrency.meta.h"

enum eOutOfBoundsBehaviour
{
    EOutOfBoundsBehaviour_NoCost = 0,
    EOutOfBoundsBehaviour_UseFirst = 1,
    EOutOfBoundsBehaviour_UseLast = 2,
};

enum eIndexProvider
{
    EIndexProvider_None = 0,
    EIndexProvider_ShipSlot = 1,
    EIndexProvider_ShipClass = 2,
    EIndexProvider_DailyFreighters = 3,
    EIndexProvider_WeaponClass = 4,
    EIndexProvider_WeaponSlot = 5,
    EIndexProvider_PetSlot = 6,
    EIndexProvider_PilotSlot = 7,
    EIndexProvider_PilotRank = 8,
};

class cGcCostMoneyList
{
public:
    static const unsigned __int64 muNameHash = 0x22A3BF55F268EEBE;
    static const unsigned __int64 muTemplateHash = 0x58EF17D19A623F12;
    static const int miNumMembers = 5;

    cTkDynamicArray<int> maCosts;
    cGcCurrency mCostCurrency;
    bool mbAssertIfOutOfBounds;
    eOutOfBoundsBehaviour meOutOfBoundsBehaviour;
    eIndexProvider meIndexProvider;

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
