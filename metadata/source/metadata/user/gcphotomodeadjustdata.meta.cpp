#include "gcphotomodeadjustdata.meta.h"

void cGcPhotoModeAdjustData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22722064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoModeAdjustData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22726384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPhotoModeAdjustData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

