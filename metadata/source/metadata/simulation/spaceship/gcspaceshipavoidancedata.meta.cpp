#include "gcspaceshipavoidancedata.meta.h"

void cGcSpaceshipAvoidanceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23479024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceshipAvoidanceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23481392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceshipAvoidanceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

