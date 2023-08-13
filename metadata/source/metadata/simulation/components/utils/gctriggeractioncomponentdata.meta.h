#pragma once

#include "../../../../../../../../pch.h"
class cGcTriggerActionComponentData
{
    static const unsigned __int64 muNameHash = 9177761554555984674;
    static const unsigned __int64 muTemplateHash = 2993279521057223266;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
