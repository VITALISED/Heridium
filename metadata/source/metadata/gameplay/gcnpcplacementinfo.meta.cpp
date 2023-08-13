#include "gcnpcplacementinfo.meta.h"

void cGcNPCPlacementInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34655280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCPlacementInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCPlacementInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

