#include "tkmodelrendererdata.meta.h"

void cTkModelRendererData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21602112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkModelRendererData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkModelRendererData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

