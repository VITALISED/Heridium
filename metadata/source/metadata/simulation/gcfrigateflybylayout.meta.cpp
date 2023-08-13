#include "gcfrigateflybylayout.meta.h"

void cGcFrigateFlybyLayout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26473488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateFlybyLayout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateFlybyLayout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

