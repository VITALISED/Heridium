#include "tkloddistances.meta.h"

void cTkLODDistances::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22146112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLODDistances::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLODDistances::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148448);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

