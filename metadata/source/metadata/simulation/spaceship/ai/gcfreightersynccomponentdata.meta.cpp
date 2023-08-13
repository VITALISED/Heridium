#include "gcfreightersynccomponentdata.meta.h"

void cGcFreighterSyncComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23643392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterSyncComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23645296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterSyncComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23646000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

