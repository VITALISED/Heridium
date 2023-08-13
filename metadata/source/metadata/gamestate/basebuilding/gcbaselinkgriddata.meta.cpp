#include "gcbaselinkgriddata.meta.h"

void cGcBaseLinkGridData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34363104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseLinkGridData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseLinkGridData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

