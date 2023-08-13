#include "gcprojectilelinedata.meta.h"

void cGcProjectileLineData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24385152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProjectileLineData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24387120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProjectileLineData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24387744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

