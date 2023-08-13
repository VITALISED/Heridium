#include "gcdebugscene.meta.h"

void cGcDebugScene::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26598784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDebugScene::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDebugScene::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604384);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

