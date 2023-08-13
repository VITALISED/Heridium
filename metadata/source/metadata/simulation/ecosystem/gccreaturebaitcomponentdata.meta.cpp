#include "gccreaturebaitcomponentdata.meta.h"

void cGcCreatureBaitComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27663184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureBaitComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27668976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureBaitComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

