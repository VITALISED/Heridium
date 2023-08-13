#include "gcseasonstatedata.meta.h"

void cGcSeasonStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33222864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33228992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

