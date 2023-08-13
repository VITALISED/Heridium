#include "gcobjectplacementcategory.meta.h"

void cGcObjectPlacementCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27042432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectPlacementCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectPlacementCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

