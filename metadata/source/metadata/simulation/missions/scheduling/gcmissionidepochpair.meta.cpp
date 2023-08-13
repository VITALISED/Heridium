#include "gcmissionidepochpair.meta.h"

void cGcMissionIDEpochPair::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25530880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionIDEpochPair::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionIDEpochPair::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

