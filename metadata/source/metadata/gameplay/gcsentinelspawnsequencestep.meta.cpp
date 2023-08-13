#include "gcsentinelspawnsequencestep.meta.h"

void cGcSentinelSpawnSequenceStep::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34554416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelSpawnSequenceStep::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelSpawnSequenceStep::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

