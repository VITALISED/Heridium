#include "gcsentinelcovercomponentdata.meta.h"

void cGcSentinelCoverComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28762000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelCoverComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28763952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelCoverComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28764576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

