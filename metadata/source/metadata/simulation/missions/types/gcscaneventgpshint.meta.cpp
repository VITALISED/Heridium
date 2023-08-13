#include "gcscaneventgpshint.meta.h"

void cGcScanEventGPSHint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24954688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventGPSHint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24956448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEventGPSHint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

