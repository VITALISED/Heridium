#include "gcscarecreaturesaction.meta.h"

void cGcScareCreaturesAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28493744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScareCreaturesAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28496400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScareCreaturesAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

