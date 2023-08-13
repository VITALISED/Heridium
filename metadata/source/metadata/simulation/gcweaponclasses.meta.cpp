#include "gcweaponclasses.meta.h"

void cGcWeaponClasses::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26231840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeaponClasses::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeaponClasses::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

