#include "gcseasonalringarray.meta.h"

void cGcSeasonalRingArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33345664);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonalRingArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33347232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonalRingArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

