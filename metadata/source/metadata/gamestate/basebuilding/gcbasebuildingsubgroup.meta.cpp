#include "gcbasebuildingsubgroup.meta.h"

void cGcBaseBuildingSubGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34361024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseBuildingSubGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34365984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseBuildingSubGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

