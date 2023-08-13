#include "gcwordknowledge.meta.h"

void cGcWordKnowledge::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33228528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWordKnowledge::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33230192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWordKnowledge::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33231088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

