#include "gcmaintenanceelement.meta.h"

void cGcMaintenanceElement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30350624);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMaintenanceElement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMaintenanceElement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

