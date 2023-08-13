#include "gcexpeditionpowerup.meta.h"

void cGcExpeditionPowerup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30585584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExpeditionPowerup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExpeditionPowerup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

