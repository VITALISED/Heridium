#include "gcheightadjustcomponentdata.meta.h"

void cGcHeightAdjustComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34745664);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHeightAdjustComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHeightAdjustComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

