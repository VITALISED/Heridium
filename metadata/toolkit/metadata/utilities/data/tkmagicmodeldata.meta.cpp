#include "tkmagicmodeldata.meta.h"

void cTkMagicModelData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21244848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMagicModelData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21247024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMagicModelData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21247440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

