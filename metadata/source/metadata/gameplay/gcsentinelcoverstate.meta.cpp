#include "gcsentinelcoverstate.meta.h"

void cGcSentinelCoverState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34659584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelCoverState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34662176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelCoverState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34663152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

