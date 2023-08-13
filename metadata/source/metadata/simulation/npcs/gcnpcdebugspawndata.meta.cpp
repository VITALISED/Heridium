#include "gcnpcdebugspawndata.meta.h"

void cGcNPCDebugSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24950688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCDebugSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCDebugSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

