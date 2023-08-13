#include "gcrealitysubstancedata.meta.h"

void cGcRealitySubstanceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29970176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealitySubstanceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealitySubstanceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

