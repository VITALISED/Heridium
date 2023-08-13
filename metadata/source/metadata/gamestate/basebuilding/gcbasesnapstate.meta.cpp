#include "gcbasesnapstate.meta.h"

void cGcBaseSnapState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34202192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseSnapState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseSnapState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

