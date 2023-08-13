#include "gcclothcollisionbone.meta.h"

void cGcClothCollisionBone::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34974544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcClothCollisionBone::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34976720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcClothCollisionBone::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

