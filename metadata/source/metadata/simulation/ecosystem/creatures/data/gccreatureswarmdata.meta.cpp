#include "gccreatureswarmdata.meta.h"

void cGcCreatureSwarmData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27953344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureSwarmData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureSwarmData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27957040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

