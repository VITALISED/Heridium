#include "gcexternalobjectlistoptions.meta.h"

void cGcExternalObjectListOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27231456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExternalObjectListOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27235488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExternalObjectListOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

