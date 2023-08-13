#include "tkopenvrcontrollerlookup.meta.h"

void cTkOpenVRControllerLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21096592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkOpenVRControllerLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkOpenVRControllerLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

