#include "gcbasebuildinggroup.meta.h"

void cGcBaseBuildingGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34462304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseBuildingGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34466928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseBuildingGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34468016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

