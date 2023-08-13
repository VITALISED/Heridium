#include "gcplayerspaceshipwarpdata.meta.h"

void cGcPlayerSpaceshipWarpData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23555088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerSpaceshipWarpData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23557056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerSpaceshipWarpData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

