#include "gcbuildingclusterlayoutentry.meta.h"

void cGcBuildingClusterLayoutEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27335904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingClusterLayoutEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27340880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingClusterLayoutEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

