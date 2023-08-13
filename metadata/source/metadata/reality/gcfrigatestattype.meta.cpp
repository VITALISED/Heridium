#include "gcfrigatestattype.meta.h"

void cGcFrigateStatType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30587168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateStatType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateStatType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

