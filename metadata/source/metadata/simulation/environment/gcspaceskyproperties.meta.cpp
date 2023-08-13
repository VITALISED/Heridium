#include "gcspaceskyproperties.meta.h"

void cGcSpaceSkyProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27120864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceSkyProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceSkyProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

