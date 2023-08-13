#include "gcfrigateflybyoption.meta.h"

void cGcFrigateFlybyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26473776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateFlybyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateFlybyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

