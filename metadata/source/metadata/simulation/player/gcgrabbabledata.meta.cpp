#include "gcgrabbabledata.meta.h"

void cGcGrabbableData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24713904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGrabbableData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24719920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGrabbableData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

