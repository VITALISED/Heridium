#include "gcpersistencymissionoverride.meta.h"

void cGcPersistencyMissionOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34656576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistencyMissionOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistencyMissionOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

