#include "gcnpcprobabilityanimationdata.meta.h"

void cGcNPCProbabilityAnimationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24952640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCProbabilityAnimationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCProbabilityAnimationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

