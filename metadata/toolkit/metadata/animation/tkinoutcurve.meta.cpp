#include "tkinoutcurve.meta.h"

void cTkInOutCurve::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22424848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInOutCurve::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22426336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInOutCurve::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22427136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

