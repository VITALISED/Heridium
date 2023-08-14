#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/character/gcplayercontrolinput.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/character/gcplayercontrolstate.meta.h"
#include "../../../../../../metadata/toolkit/metadata/simulation/tkblackboardkey.meta.h"

class cGcPlayerControlComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xE15445D2CE8FD16D;
    static const unsigned __int64 muTemplateHash = 0xA1DBD4B57660CA14;
    static const int miNumMembers = 7;

    TkID<128> mInitialState;
    cGcPlayerControlInput mBaseInput;
    TkID<128> mBaseCamera;
    cTkDynamicArray<cGcPlayerControlState> maStates;
    cTkBlackboardKey mAimDir;
    cTkBlackboardKey mTorchDir;
    cTkBlackboardKey mCrosshairDir;

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
