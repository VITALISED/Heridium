#include "gcblackboardintmodifydata.meta.h"

void cGcBlackboardIntModifyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28155968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBlackboardIntModifyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28159808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBlackboardIntModifyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

