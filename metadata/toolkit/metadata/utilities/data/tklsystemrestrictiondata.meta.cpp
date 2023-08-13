#include "tklsystemrestrictiondata.meta.h"

void cTkLSystemRestrictionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21376896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemRestrictionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21379024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemRestrictionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21380048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

