#include "gcsolargenerationdata.meta.h"

void cGcSolarGenerationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24231872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarGenerationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarGenerationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

