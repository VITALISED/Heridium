#pragma once
#include "../../../../pch.h"

class cGcUnlockableSeasonReward
{
public:
    static const unsigned __int64 muNameHash = 0xC06F148BB67FE0E2;
    static const unsigned __int64 muTemplateHash = 0xBAE43A4AAE4C25DF;
    static const int miNumMembers = 7;

    TkID<128> mID;
    bool mbMustBeUnlocked;
    bool mbUniqueInventoryItem;
    bool mbIsCape;
    bool mbSwitchExclusive;
    cTkDynamicArray<int> maSeasonIds;
    cTkDynamicArray<int> maStageIds;

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
