#include "gcoutpostlsystempair.meta.h"

void cGcOutpostLSystemPair::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28691648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcOutpostLSystemPair::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28694272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcOutpostLSystemPair::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28694992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

