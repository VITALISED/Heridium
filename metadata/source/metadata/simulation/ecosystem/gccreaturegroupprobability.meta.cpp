#include "gccreaturegroupprobability.meta.h"

void cGcCreatureGroupProbability::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27542544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureGroupProbability::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureGroupProbability::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

