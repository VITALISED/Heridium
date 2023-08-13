#include "gcphotoplant.meta.h"

void cGcPhotoPlant::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24716832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoPlant::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoPlant::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

