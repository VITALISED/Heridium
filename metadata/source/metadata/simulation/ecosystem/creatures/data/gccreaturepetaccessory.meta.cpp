#include "gccreaturepetaccessory.meta.h"

void cGcCreaturePetAccessory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28064304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreaturePetAccessory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28067856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreaturePetAccessory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28069008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

