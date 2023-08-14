#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/components/utils/gcactiontriggerstate.meta.h"

class cGcTriggerActionComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x7F5DF5820C8BDB22;
    static const unsigned __int64 muTemplateHash = 0x298A43DD86113262;
    static const int miNumMembers = 7;

    bool mbHideModel;
    bool mbStartInactive;
    cTkDynamicArray<cGcActionTriggerState> maStates;
    bool mbPersistent;
    TkID<128> mPersistentState;
    bool mbResetShotTimeOnStateChange;
    bool mbLinkStateToBaseGrid;

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
