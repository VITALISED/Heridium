#include "tkhitcurvedata.meta.h"

void cTkHitCurveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22424352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkHitCurveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22426256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkHitCurveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22427088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

