#include "tknoisefeaturedata.meta.h"

void cTkNoiseFeatureData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20973904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseFeatureData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseFeatureData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

