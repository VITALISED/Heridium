#include "tknoiseoffsetenum.meta.h"

void cTkNoiseOffsetEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20976832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseOffsetEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseOffsetEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

