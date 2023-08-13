#include "gcgeneratorunitcomponentdata.meta.h"

void cGcGeneratorUnitComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28869520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratorUnitComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28874144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGeneratorUnitComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

