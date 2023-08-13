#include "gcmechweaponlocationpriority.meta.h"

void cGcMechWeaponLocationPriority::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23265968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechWeaponLocationPriority::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23267392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechWeaponLocationPriority::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

