#include "gccreatureattractorcomponentdata.meta.h"

void cGcCreatureAttractorComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27662768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureAttractorComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27668896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureAttractorComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

