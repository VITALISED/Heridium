#include "gcbiomesubtype.meta.h"

void cGcBiomeSubType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24118624);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeSubType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123744);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeSubType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

