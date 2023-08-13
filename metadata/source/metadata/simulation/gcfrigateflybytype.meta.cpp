#include "gcfrigateflybytype.meta.h"

void cGcFrigateFlybyType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26474320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateFlybyType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateFlybyType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

