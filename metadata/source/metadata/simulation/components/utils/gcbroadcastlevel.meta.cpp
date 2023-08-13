#include "gcbroadcastlevel.meta.h"

void cGcBroadcastLevel::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28598432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBroadcastLevel::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBroadcastLevel::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

