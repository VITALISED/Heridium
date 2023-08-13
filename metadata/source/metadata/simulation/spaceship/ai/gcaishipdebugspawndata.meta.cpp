#include "gcaishipdebugspawndata.meta.h"

void cGcAIShipDebugSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23758864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAIShipDebugSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23764960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAIShipDebugSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

