#include "gcnpcprobabilitywordreactiondata.meta.h"

void cGcNPCProbabilityWordReactionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24953248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCProbabilityWordReactionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24956128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCProbabilityWordReactionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

