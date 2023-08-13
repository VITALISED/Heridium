#include "gccreaturevocalsounddata.meta.h"

void cGcCreatureVocalSoundData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27954752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureVocalSoundData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureVocalSoundData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27957184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

