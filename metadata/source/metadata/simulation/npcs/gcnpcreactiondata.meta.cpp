#include "gcnpcreactiondata.meta.h"

void cGcNPCReactionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24840976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCReactionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24845904);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCReactionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

