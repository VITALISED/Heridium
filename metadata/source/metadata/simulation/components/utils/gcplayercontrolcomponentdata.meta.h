#pragma once

#include "../../../../../../../../pch.h"
class cGcPlayerControlInput;
class cTkBlackboardKey;
class cTkBlackboardKey;
class cTkBlackboardKey;

class cGcPlayerControlComponentData
{
    static const unsigned __int64 muNameHash = 16236679328288461165;
    static const unsigned __int64 muTemplateHash = 11663149535846255124;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};