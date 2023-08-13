#include "gcrocketlockercomponentdata.meta.h"

void cGcRocketLockerComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28761760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRocketLockerComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28763872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRocketLockerComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28764528);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

