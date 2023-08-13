#include "gcproductproceduralonlydata.meta.h"

void cGcProductProceduralOnlyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30216000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProductProceduralOnlyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProductProceduralOnlyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

