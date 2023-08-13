#include "gcmissionschedulingdata.meta.h"

void cGcMissionSchedulingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25531424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSchedulingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSchedulingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

