#include "gcterrainoverlaycolours.meta.h"

void cGcTerrainOverlayColours::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31577616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainOverlayColours::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainOverlayColours::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

