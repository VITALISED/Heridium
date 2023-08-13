#include "tkproceduralinstancedata.meta.h"

void cTkProceduralInstanceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22242400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralInstanceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralInstanceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

