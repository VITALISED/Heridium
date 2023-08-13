#include "gcsentinelspawnsequencegrouplist.meta.h"

void cGcSentinelSpawnSequenceGroupList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34554112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelSpawnSequenceGroupList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelSpawnSequenceGroupList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

