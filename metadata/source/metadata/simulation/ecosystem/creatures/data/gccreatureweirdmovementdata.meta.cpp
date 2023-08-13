#include "gccreatureweirdmovementdata.meta.h"

void cGcCreatureWeirdMovementData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27955040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureWeirdMovementData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureWeirdMovementData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27957232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

