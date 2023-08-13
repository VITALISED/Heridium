#include "tksceneboneremappingtable.meta.h"

void cTkSceneBoneRemappingTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21708848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSceneBoneRemappingTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSceneBoneRemappingTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

