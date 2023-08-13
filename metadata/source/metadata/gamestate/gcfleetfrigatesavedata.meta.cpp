#include "gcfleetfrigatesavedata.meta.h"

void cGcFleetFrigateSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33949184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFleetFrigateSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33952784);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFleetFrigateSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33953856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

