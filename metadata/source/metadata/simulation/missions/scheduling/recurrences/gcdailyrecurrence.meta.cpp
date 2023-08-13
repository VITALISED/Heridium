#include "gcdailyrecurrence.meta.h"

void cGcDailyRecurrence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25529344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDailyRecurrence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDailyRecurrence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

