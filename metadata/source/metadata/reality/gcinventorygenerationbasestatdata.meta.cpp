#include "gcinventorygenerationbasestatdata.meta.h"

void cGcInventoryGenerationBaseStatData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30464704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryGenerationBaseStatData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryGenerationBaseStatData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

