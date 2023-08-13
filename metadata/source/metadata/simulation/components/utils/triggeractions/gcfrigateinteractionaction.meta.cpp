#include "gcfrigateinteractionaction.meta.h"

void cGcFrigateInteractionAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28489200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateInteractionAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateInteractionAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

