#include "tkemitterfloatproperty.meta.h"

void cTkEmitterFloatProperty::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21371312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEmitterFloatProperty::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21377824);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkEmitterFloatProperty::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

