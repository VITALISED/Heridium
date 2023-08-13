#include "gcbuildingpartsearchtype.meta.h"

void cGcBuildingPartSearchType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25051696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingPartSearchType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25059856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingPartSearchType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

