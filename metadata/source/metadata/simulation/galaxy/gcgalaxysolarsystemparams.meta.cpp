#include "gcgalaxysolarsystemparams.meta.h"

void cGcGalaxySolarSystemParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26695584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxySolarSystemParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26698224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxySolarSystemParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26698992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

