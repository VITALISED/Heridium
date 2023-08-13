#include "gcbuildingclassification.meta.h"

void cGcBuildingClassification::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27335392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingClassification::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27340720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingClassification::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

