#include "gcplayercharacterikoverridedata.meta.h"

void cGcPlayerCharacterIKOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24717376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerCharacterIKOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerCharacterIKOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

