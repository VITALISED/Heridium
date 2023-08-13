#include "gcmissionsequencesetcurrentmission.meta.h"

void cGcMissionSequenceSetCurrentMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25243296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSequenceSetCurrentMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25248000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSequenceSetCurrentMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25249248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

