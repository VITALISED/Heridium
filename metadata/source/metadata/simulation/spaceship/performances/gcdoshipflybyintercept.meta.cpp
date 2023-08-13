#include "gcdoshipflybyintercept.meta.h"

void cGcDoShipFlybyIntercept::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23473776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDoShipFlybyIntercept::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDoShipFlybyIntercept::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

