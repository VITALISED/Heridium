#include "tkanimposecorrelationdata.meta.h"

void cTkAnimPoseCorrelationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22420928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimPoseCorrelationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimPoseCorrelationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

