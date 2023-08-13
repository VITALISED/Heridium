#include "gcnpcplacementcomponentdata.meta.h"

void cGcNPCPlacementComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34654944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCPlacementComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCPlacementComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

