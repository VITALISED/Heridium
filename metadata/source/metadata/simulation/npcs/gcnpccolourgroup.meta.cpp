#include "gcnpccolourgroup.meta.h"

void cGcNPCColourGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24950160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCColourGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCColourGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

