#include "gctriggeractioncomponentdata.meta.h"

void cGcTriggerActionComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28603872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTriggerActionComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTriggerActionComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28607008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

