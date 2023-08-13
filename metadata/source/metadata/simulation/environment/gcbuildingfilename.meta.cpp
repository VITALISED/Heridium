#include "gcbuildingfilename.meta.h"

void cGcBuildingFilename::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27337648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingFilename::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingFilename::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

