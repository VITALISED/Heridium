#include "gccostmissioncomplete.meta.h"

void cGcCostMissionComplete::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30677616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostMissionComplete::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostMissionComplete::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

