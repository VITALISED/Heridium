#include "gcsentinelspawnwave.meta.h"

void cGcSentinelSpawnWave::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34554672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelSpawnWave::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelSpawnWave::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

