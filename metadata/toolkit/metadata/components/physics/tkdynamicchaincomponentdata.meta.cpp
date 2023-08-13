#include "tkdynamicchaincomponentdata.meta.h"

void cTkDynamicChainComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22311872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkDynamicChainComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkDynamicChainComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

