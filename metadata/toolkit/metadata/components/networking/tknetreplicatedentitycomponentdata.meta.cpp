#include "tknetreplicatedentitycomponentdata.meta.h"

void cTkNetReplicatedEntityComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22312896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNetReplicatedEntityComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22315056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNetReplicatedEntityComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

