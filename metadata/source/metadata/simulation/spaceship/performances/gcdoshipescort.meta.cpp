#include "gcdoshipescort.meta.h"

void cGcDoShipEscort::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23473120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDoShipEscort::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDoShipEscort::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

