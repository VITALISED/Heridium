#include "gcscaneffectcomponentdata.meta.h"

void cGcScanEffectComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28692896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEffectComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28694512);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEffectComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28695088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

