#include "gcterraintiletype.meta.h"

void cGcTerrainTileType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27122768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainTileType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainTileType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

