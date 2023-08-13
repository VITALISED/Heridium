#include "gcspacemapobjectdata.meta.h"

void cGcSpaceMapObjectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31317504);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceMapObjectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31318704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceMapObjectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31319040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

