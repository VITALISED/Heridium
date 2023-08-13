#include "gcplanetdataresourcehint.meta.h"

void cGcPlanetDataResourceHint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23991328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetDataResourceHint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetDataResourceHint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23996976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

