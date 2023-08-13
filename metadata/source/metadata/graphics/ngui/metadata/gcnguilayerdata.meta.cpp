#include "gcnguilayerdata.meta.h"

void cGcNGuiLayerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31225824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiLayerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31231760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNGuiLayerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

