#include "tknoiseuberlayerdata.meta.h"

void cTkNoiseUberLayerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20977968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseUberLayerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseUberLayerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

