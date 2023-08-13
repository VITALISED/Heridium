#include "gcplayerconflictdata.meta.h"

void cGcPlayerConflictData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23865408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerConflictData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerConflictData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

