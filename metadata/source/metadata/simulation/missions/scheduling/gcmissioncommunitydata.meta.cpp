#include "gcmissioncommunitydata.meta.h"

void cGcMissionCommunityData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25530128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionCommunityData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionCommunityData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

