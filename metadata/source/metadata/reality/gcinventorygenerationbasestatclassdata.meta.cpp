#include "gcinventorygenerationbasestatclassdata.meta.h"

void cGcInventoryGenerationBaseStatClassData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30464448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryGenerationBaseStatClassData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryGenerationBaseStatClassData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30471952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

