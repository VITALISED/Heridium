#include "tknoisegriddata.meta.h"

void cTkNoiseGridData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20975104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseGridData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseGridData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

