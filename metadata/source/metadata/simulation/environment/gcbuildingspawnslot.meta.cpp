#include "gcbuildingspawnslot.meta.h"

void cGcBuildingSpawnSlot::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27339088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingSpawnSlot::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingSpawnSlot::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

