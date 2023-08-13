#include "gcwordgroupknowledge.meta.h"

void cGcWordGroupKnowledge::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33228224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWordGroupKnowledge::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33230112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWordGroupKnowledge::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33231040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

