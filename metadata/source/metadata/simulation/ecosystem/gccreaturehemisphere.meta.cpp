#include "gccreaturehemisphere.meta.h"

void cGcCreatureHemiSphere::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27543152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureHemiSphere::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548352);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureHemiSphere::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

