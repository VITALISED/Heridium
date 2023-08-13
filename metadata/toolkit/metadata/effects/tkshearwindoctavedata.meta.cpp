#include "tkshearwindoctavedata.meta.h"

void cTkShearWindOctaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22245584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkShearWindOctaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22247328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkShearWindOctaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22248160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

