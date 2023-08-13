#include "gccharacterrotate.meta.h"

void cGcCharacterRotate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28980640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterRotate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterRotate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

