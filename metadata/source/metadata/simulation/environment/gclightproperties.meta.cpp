#include "gclightproperties.meta.h"

void cGcLightProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27232304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLightProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27235648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLightProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

