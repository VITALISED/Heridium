#include "gcnodeactivationaction.meta.h"

void cGcNodeActivationAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28491184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNodeActivationAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNodeActivationAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

