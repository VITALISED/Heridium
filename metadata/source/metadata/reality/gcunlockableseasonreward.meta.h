#pragma once

#include "../../../../../../pch.h"
class cGcUnlockableSeasonReward
{
    static const unsigned __int64 muNameHash = 13866324367991890146;
    static const unsigned __int64 muTemplateHash = 13466952878170842591;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
