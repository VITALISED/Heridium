#include "gcrealitysubstancecategory.meta.h"

void cGcRealitySubstanceCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30100432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealitySubstanceCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealitySubstanceCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

