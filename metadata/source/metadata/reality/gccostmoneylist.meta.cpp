#include "gccostmoneylist.meta.h"

void cGcCostMoneyList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30678240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostMoneyList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostMoneyList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

