#include "gcbasebuildingmode.meta.h"

void cGcBaseBuildingMode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34463280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseBuildingMode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34467088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseBuildingMode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34468112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

