#include "gcdungeongenerationparams.meta.h"

void cGcDungeonGenerationParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26599472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDungeonGenerationParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDungeonGenerationParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

