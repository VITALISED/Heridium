#include "gccostpiratetribute.meta.h"

void cGcCostPirateTribute::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30679984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostPirateTribute::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30686080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostPirateTribute::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

