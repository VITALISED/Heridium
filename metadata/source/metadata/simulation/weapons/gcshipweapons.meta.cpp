#include "gcshipweapons.meta.h"

void cGcShipWeapons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23067936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipWeapons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23070064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipWeapons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23071088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

