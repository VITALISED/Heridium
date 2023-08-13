#include "gcdebugcamera.meta.h"

void cGcDebugCamera::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23383552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDebugCamera::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDebugCamera::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

