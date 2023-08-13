#include "gcgalaxycameradata.meta.h"

void cGcGalaxyCameraData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26808192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxyCameraData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxyCameraData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26811824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

