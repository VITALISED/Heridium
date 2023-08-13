#include "gcvroverride_layout.meta.h"

void cGcVROverride_Layout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31122608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVROverride_Layout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVROverride_Layout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

