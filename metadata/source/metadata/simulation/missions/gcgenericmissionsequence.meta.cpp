#include "gcgenericmissionsequence.meta.h"

void cGcGenericMissionSequence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25650576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGenericMissionSequence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGenericMissionSequence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

