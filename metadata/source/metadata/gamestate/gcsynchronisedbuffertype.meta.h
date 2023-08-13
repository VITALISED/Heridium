#pragma once

#include "../../../../../../pch.h"
enum eSyncBufferType
{
    ESyncBufferType_Refiner = 0,
    ESyncBufferType_Example1 = 1,
    ESyncBufferType_Example2 = 2,
    ESyncBufferType_Example3 = 3,
};

class cGcSynchronisedBufferType
{
    static const unsigned __int64 muNameHash = 610640059055688683;
    static const unsigned __int64 muTemplateHash = 2002371179664688878;
    static const int miNumMembers = 1;

    eSyncBufferType meSyncBufferType;

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
