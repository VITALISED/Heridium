#include "gcnpccolourtable.meta.h"

void cGcNPCColourTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24950432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCColourTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCColourTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

