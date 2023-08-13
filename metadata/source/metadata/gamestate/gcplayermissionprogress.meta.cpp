#include "gcplayermissionprogress.meta.h"

void cGcPlayerMissionProgress::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33787248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerMissionProgress::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerMissionProgress::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

