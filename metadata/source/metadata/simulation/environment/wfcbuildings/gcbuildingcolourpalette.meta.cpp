#include "gcbuildingcolourpalette.meta.h"

void cGcBuildingColourPalette::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26920304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingColourPalette::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26926400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingColourPalette::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26927840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

