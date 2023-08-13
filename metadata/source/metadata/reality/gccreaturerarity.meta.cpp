#include "gccreaturerarity.meta.h"

void cGcCreatureRarity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30581248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureRarity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureRarity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

