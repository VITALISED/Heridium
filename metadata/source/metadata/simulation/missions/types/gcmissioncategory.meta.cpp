#include "gcmissioncategory.meta.h"

void cGcMissionCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25052736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

