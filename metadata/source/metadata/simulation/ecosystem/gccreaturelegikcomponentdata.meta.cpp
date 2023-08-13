#include "gccreaturelegikcomponentdata.meta.h"

void cGcCreatureLegIKComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27543808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureLegIKComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548512);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureLegIKComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

