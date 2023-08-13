#include "gcinteractionbasebuildingstate.meta.h"

void cGcInteractionBaseBuildingState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34746800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionBaseBuildingState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInteractionBaseBuildingState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

