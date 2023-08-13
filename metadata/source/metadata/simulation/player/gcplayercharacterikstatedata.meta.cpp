#include "gcplayercharacterikstatedata.meta.h"

void cGcPlayerCharacterIKStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24717680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerCharacterIKStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerCharacterIKStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721936);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

