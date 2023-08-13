#include "gcplanetsectiondata.meta.h"

void cGcPlanetSectionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23861808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetSectionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23868272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetSectionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23869792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

