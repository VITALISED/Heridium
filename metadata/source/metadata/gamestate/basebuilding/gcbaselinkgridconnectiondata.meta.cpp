#include "gcbaselinkgridconnectiondata.meta.h"

void cGcBaseLinkGridConnectionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34362432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseLinkGridConnectionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseLinkGridConnectionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

