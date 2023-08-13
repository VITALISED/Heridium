#include "gcplanettradingdata.meta.h"

void cGcPlanetTradingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23863184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetTradingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetTradingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23869984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

