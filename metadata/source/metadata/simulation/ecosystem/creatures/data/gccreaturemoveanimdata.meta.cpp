#include "gccreaturemoveanimdata.meta.h"

void cGcCreatureMoveAnimData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28063600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureMoveAnimData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28067696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureMoveAnimData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28068912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

