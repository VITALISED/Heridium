#include "gcprojectoroffsetdata.meta.h"

void cGcProjectorOffsetData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24599616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProjectorOffsetData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24602208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProjectorOffsetData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24603056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

