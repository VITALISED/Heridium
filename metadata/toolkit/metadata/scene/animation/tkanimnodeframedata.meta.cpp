#include "tkanimnodeframedata.meta.h"

void cTkAnimNodeFrameData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21932016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimNodeFrameData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimNodeFrameData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21937680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

