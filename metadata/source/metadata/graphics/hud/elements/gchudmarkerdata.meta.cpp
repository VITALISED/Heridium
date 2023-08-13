#include "gchudmarkerdata.meta.h"

void cGcHUDMarkerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31418768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHUDMarkerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424784);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHUDMarkerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

