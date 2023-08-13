#include "gcremoteweapons.meta.h"

void cGcRemoteWeapons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23067424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRemoteWeapons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069904);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRemoteWeapons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

