#include "gcnpcworkerdata.meta.h"

void cGcNPCWorkerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34209648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCWorkerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCWorkerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

