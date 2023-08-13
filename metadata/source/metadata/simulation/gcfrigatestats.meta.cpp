#include "gcfrigatestats.meta.h"

void cGcFrigateStats::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26474816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateStats::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateStats::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

