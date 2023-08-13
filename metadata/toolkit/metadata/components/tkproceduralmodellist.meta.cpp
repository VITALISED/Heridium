#include "tkproceduralmodellist.meta.h"

void cTkProceduralModelList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22242944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralModelList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralModelList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

