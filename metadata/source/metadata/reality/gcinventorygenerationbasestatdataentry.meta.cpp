#include "gcinventorygenerationbasestatdataentry.meta.h"

void cGcInventoryGenerationBaseStatDataEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30464992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryGenerationBaseStatDataEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryGenerationBaseStatDataEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

