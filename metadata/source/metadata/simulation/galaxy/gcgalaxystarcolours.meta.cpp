#include "gcgalaxystarcolours.meta.h"

void cGcGalaxyStarColours::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26696624);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxyStarColours::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26698464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxyStarColours::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26699136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

