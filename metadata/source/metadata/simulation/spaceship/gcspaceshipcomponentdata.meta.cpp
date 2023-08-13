#include "gcspaceshipcomponentdata.meta.h"

void cGcSpaceshipComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23479488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceshipComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23481472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceshipComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

