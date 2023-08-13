#include "gcbaseplacementcomponentdata.meta.h"

void cGcBasePlacementComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34846592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBasePlacementComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBasePlacementComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

