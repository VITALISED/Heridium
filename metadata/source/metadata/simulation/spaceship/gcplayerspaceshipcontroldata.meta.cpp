#include "gcplayerspaceshipcontroldata.meta.h"

void cGcPlayerSpaceshipControlData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23553120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerSpaceshipControlData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23556896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerSpaceshipControlData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

