#include "gccostgamemode.meta.h"

void cGcCostGameMode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30782272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostGameMode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostGameMode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30787088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

