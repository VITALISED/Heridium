#include "gcphotobuilding.meta.h"

void cGcPhotoBuilding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24714720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoBuilding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoBuilding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

