#include "gcplayerweaponclass.meta.h"

void cGcPlayerWeaponClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23179296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerWeaponClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23184816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerWeaponClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

