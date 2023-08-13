#include "gcrealitycommonfactions.meta.h"

void cGcRealityCommonFactions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30218272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityCommonFactions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityCommonFactions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

