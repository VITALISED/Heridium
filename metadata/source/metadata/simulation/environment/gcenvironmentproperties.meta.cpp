#include "gcenvironmentproperties.meta.h"

void cGcEnvironmentProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27340224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEnvironmentProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEnvironmentProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

