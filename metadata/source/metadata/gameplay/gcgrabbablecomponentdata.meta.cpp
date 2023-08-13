#include "gcgrabbablecomponentdata.meta.h"

void cGcGrabbableComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34745136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGrabbableComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGrabbableComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749344);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

