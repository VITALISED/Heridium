#include "gcplayerhazarddata.meta.h"

void cGcPlayerHazardData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24597696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerHazardData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerHazardData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

