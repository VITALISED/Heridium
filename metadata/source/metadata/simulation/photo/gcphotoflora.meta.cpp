#include "gcphotoflora.meta.h"

void cGcPhotoFlora::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24716288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoFlora::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoFlora::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

