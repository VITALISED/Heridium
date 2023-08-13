#include "gccreatureeggcomponentdata.meta.h"

void cGcCreatureEggComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27665264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureEggComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureEggComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

