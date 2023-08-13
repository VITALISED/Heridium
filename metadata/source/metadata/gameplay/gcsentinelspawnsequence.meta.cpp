#include "gcsentinelspawnsequence.meta.h"

void cGcSentinelSpawnSequence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34660672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelSpawnSequence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34662416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelSpawnSequence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34663296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

