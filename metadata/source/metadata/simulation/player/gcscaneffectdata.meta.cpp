#include "gcscaneffectdata.meta.h"

void cGcScanEffectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24600496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEffectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24602368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEffectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24603152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

