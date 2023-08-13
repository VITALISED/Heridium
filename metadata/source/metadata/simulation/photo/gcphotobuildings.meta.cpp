#include "gcphotobuildings.meta.h"

void cGcPhotoBuildings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24714944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoBuildings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoBuildings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

