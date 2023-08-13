#include "gcsentinelspawnnamedsequence.meta.h"

void cGcSentinelSpawnNamedSequence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34660368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelSpawnNamedSequence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34662336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelSpawnNamedSequence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34663248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

