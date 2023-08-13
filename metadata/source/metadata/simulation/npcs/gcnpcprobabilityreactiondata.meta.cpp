#include "gcnpcprobabilityreactiondata.meta.h"

void cGcNPCProbabilityReactionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24952928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCProbabilityReactionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24956048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCProbabilityReactionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

