#include "gcphotofauna.meta.h"

void cGcPhotoFauna::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24715712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoFauna::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoFauna::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

