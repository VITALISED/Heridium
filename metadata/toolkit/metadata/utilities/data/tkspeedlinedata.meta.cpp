#include "tkspeedlinedata.meta.h"

void cTkSpeedLineData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21156336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSpeedLineData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21158048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkSpeedLineData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21158592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

