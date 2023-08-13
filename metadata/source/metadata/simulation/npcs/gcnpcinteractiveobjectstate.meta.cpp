#include "gcnpcinteractiveobjectstate.meta.h"

void cGcNPCInteractiveObjectState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24951712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCInteractiveObjectState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCInteractiveObjectState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

