#include "gcplayerweapons.meta.h"

void cGcPlayerWeapons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23180592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerWeapons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerWeapons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

