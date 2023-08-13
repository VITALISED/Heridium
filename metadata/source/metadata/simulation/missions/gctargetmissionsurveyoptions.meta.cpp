#include "gctargetmissionsurveyoptions.meta.h"

void cGcTargetMissionSurveyOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25535888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTargetMissionSurveyOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25538832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTargetMissionSurveyOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25540032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

