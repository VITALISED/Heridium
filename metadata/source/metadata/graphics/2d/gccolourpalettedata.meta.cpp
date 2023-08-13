#include "gccolourpalettedata.meta.h"

void cGcColourPaletteData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31576128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcColourPaletteData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcColourPaletteData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

