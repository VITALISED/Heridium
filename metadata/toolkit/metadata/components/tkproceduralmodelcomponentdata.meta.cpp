#include "tkproceduralmodelcomponentdata.meta.h"

void cTkProceduralModelComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22242688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralModelComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralModelComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

