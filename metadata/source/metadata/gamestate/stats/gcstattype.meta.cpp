#include "gcstattype.meta.h"

void cGcStatType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33023440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33026112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

