#include "tkgridlayersenum.meta.h"

void cTkGridLayersEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20973136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkGridLayersEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkGridLayersEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

