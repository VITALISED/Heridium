#include "gccharacterlookatdata.meta.h"

void cGcCharacterLookAtData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28979696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterLookAtData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterLookAtData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

