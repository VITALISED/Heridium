#include "gcpurchaseablebuildingblueprints.meta.h"

void cGcPurchaseableBuildingBlueprints::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30216864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPurchaseableBuildingBlueprints::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPurchaseableBuildingBlueprints::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

