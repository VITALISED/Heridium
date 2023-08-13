#include "gcrepairtechdata.meta.h"

void cGcRepairTechData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33342256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRepairTechData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33346832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRepairTechData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

