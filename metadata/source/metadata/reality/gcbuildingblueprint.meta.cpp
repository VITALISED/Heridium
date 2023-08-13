#include "gcbuildingblueprint.meta.h"

void cGcBuildingBlueprint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30777808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingBlueprint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingBlueprint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

