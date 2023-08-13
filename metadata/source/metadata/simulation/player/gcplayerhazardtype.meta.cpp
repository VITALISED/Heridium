#include "gcplayerhazardtype.meta.h"

void cGcPlayerHazardType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24598560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerHazardType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerHazardType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

