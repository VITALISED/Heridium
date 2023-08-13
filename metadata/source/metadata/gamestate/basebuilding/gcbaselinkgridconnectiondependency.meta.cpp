#include "gcbaselinkgridconnectiondependency.meta.h"

void cGcBaseLinkGridConnectionDependency::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34362752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseLinkGridConnectionDependency::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366304);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseLinkGridConnectionDependency::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

