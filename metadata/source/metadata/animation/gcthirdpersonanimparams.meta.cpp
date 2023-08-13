#include "gcthirdpersonanimparams.meta.h"

void cGcThirdPersonAnimParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35109776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcThirdPersonAnimParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35111408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcThirdPersonAnimParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35112064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

