#include "gcinventorycostdata.meta.h"

void cGcInventoryCostData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30463664);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryCostData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryCostData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30471856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

