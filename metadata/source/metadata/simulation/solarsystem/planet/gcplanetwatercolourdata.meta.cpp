#include "gcplanetwatercolourdata.meta.h"

void cGcPlanetWaterColourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23863760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetWaterColourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetWaterColourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

