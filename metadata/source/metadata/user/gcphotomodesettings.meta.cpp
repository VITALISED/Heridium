#include "gcphotomodesettings.meta.h"

void cGcPhotoModeSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22722464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoModeSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22726464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoModeSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

