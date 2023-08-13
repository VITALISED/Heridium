#include "gcaishipweapons.meta.h"

void cGcAIShipWeapons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23178128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAIShipWeapons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23184576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAIShipWeapons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

