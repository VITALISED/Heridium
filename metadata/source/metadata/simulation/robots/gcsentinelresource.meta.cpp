#include "gcsentinelresource.meta.h"

void cGcSentinelResource::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24311984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelResource::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelResource::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314384);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

