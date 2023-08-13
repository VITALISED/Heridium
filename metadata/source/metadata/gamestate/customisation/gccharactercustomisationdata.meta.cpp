#include "gccharactercustomisationdata.meta.h"

void cGcCharacterCustomisationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34070592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterCustomisationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterCustomisationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

