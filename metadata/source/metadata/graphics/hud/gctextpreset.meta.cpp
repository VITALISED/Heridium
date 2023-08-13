#include "gctextpreset.meta.h"

void cGcTextPreset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31317968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTextPreset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31318784);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTextPreset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31319088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

