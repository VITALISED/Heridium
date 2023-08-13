#include "gccreaturemovementdata.meta.h"

void cGcCreatureMovementData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28063856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureMovementData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28067776);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureMovementData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28068960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

