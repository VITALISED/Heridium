#include "gccharactercustomisationsavedata.meta.h"

void cGcCharacterCustomisationSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34070880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterCustomisationSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076352);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterCustomisationSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

