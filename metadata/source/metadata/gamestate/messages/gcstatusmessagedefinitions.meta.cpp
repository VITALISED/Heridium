#include "gcstatusmessagedefinitions.meta.h"

void cGcStatusMessageDefinitions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33121264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatusMessageDefinitions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatusMessageDefinitions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

