#include "gcweightedbuildingsize.meta.h"

void cGcWeightedBuildingSize::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26925376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeightedBuildingSize::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeightedBuildingSize::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

