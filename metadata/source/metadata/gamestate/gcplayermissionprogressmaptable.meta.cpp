#include "gcplayermissionprogressmaptable.meta.h"

void cGcPlayerMissionProgressMapTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33787904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerMissionProgressMapTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerMissionProgressMapTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

