#include "gcbasebuildingtable.meta.h"

void cGcBaseBuildingTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34361312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseBuildingTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseBuildingTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

