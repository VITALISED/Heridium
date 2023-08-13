#include "gcdungeonroomparams.meta.h"

void cGcDungeonRoomParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26600448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDungeonRoomParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDungeonRoomParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604528);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

