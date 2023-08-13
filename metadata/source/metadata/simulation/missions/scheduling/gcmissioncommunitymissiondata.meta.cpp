#include "gcmissioncommunitymissiondata.meta.h"

void cGcMissionCommunityMissionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25530432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionCommunityMissionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionCommunityMissionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

