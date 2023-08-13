#include "tknoiselayerdata.meta.h"

void cTkNoiseLayerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20975760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseLayerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseLayerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

