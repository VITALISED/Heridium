#include "gcspaceshiptraveldata.meta.h"

void cGcSpaceshipTravelData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23556320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceshipTravelData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23557376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceshipTravelData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

