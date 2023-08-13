#include "gcdoshipflybyclose.meta.h"

void cGcDoShipFlybyClose::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23473424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDoShipFlybyClose::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDoShipFlybyClose::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

