#include "gcscaneventtriggers.meta.h"

void cGcScanEventTriggers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26230384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventTriggers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEventTriggers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

