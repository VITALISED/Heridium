#include "gclandinghelpercomponentdata.meta.h"

void cGcLandingHelperComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34747072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLandingHelperComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLandingHelperComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

