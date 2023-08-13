#include "tklodmodelresource.meta.h"

void cTkLODModelResource::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21598560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLODModelResource::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLODModelResource::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

