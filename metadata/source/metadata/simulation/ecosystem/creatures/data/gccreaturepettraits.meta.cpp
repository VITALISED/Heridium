#include "gccreaturepettraits.meta.h"

void cGcCreaturePetTraits::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28066816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreaturePetTraits::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28068496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreaturePetTraits::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28069392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

