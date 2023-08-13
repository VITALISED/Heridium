#include "gccamerashakeaction.meta.h"

void cGcCameraShakeAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28487200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraShakeAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28494960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraShakeAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28496816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

