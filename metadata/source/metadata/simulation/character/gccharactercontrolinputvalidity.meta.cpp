#include "gccharactercontrolinputvalidity.meta.h"

void cGcCharacterControlInputValidity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28978752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterControlInputValidity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28986912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterControlInputValidity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

