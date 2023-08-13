#include "gcpresettexturedata.meta.h"

void cGcPresetTextureData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31503888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPresetTextureData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPresetTextureData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31508112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

