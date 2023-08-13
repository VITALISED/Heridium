#include "tksketchconditions.meta.h"

void cTkSketchConditions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21485600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSketchConditions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSketchConditions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

