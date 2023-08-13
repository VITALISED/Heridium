#include "gcsentinelwavegroup.meta.h"

void cGcSentinelWaveGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34554992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelWaveGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelWaveGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560384);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

