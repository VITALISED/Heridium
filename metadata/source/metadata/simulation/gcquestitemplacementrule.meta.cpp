#include "gcquestitemplacementrule.meta.h"

void cGcQuestItemPlacementRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26308896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcQuestItemPlacementRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcQuestItemPlacementRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

