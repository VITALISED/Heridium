#include "gcplayerspaceshipclassbonuses.meta.h"

void cGcPlayerSpaceshipClassBonuses::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23552608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerSpaceshipClassBonuses::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23556816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerSpaceshipClassBonuses::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

