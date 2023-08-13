#include "tknoiselayersenum.meta.h"

void cTkNoiseLayersEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20976512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseLayersEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseLayersEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

