#include "gcfrigatetraitdata.meta.h"

void cGcFrigateTraitData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26475616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateTraitData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateTraitData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

