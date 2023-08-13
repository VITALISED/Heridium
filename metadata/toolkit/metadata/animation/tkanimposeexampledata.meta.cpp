#include "tkanimposeexampledata.meta.h"

void cTkAnimPoseExampleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22421568);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimPoseExampleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimPoseExampleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

