#include "gcteleportendpoint.meta.h"

void cGcTeleportEndpoint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33225888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTeleportEndpoint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTeleportEndpoint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

