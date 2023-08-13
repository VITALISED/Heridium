#include "gccreaturediet.meta.h"

void cGcCreatureDiet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27664688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureDiet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureDiet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

