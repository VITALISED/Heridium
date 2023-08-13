#include "tkopenvrcontrollerlist.meta.h"

void cTkOpenVRControllerList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21096336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkOpenVRControllerList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkOpenVRControllerList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

