#include "tknoiseflattenpoint.meta.h"

void cTkNoiseFlattenPoint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20974816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseFlattenPoint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseFlattenPoint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

