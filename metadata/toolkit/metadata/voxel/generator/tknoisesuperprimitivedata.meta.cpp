#include "tknoisesuperprimitivedata.meta.h"

void cTkNoiseSuperPrimitiveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20977408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseSuperPrimitiveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseSuperPrimitiveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

