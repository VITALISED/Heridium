#include "tkinteractivecontroldata.meta.h"

void cTkInteractiveControlData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21597680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInteractiveControlData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInteractiveControlData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21604896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

