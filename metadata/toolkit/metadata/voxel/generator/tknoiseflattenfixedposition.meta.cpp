#include "tknoiseflattenfixedposition.meta.h"

void cTkNoiseFlattenFixedPosition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20974240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseFlattenFixedPosition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseFlattenFixedPosition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

