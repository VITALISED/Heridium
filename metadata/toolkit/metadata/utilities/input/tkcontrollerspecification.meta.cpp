#include "tkcontrollerspecification.meta.h"

void cTkControllerSpecification::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21095728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkControllerSpecification::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkControllerSpecification::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

