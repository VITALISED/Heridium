#include "gcphotocreature.meta.h"

void cGcPhotoCreature::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24715488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoCreature::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoCreature::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

