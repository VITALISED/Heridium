#include "gccreaturepetparthider.meta.h"

void cGcCreaturePetPartHider::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28065520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreaturePetPartHider::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28068176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreaturePetPartHider::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28069200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

