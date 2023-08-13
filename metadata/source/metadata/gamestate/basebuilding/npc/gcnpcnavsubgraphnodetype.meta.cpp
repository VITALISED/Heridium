#include "gcnpcnavsubgraphnodetype.meta.h"

void cGcNPCNavSubgraphNodeType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34074048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCNavSubgraphNodeType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34077072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCNavSubgraphNodeType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

