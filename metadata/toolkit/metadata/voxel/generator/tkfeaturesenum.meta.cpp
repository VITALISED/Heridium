#include "tkfeaturesenum.meta.h"

void cTkFeaturesEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20972816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkFeaturesEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkFeaturesEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

