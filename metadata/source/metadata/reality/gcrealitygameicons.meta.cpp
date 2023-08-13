#include "gcrealitygameicons.meta.h"

void cGcRealityGameIcons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30219248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityGameIcons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityGameIcons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

