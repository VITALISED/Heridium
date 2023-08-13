#include "tkinteractivescenedata.meta.h"

void cTkInteractiveSceneData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21598000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInteractiveSceneData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInteractiveSceneData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21604944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

