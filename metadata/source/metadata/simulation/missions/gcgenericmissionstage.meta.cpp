#include "gcgenericmissionstage.meta.h"

void cGcGenericMissionStage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25651440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGenericMissionStage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGenericMissionStage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

