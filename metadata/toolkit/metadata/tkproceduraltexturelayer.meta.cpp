#include "tkproceduraltexturelayer.meta.h"

void cTkProceduralTextureLayer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21484720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralTextureLayer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralTextureLayer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

