#include "gccreaturepetmood.meta.h"

void cGcCreaturePetMood::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28065200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreaturePetMood::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28068096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreaturePetMood::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28069152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

