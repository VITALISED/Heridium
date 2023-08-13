#include "gcrewardmissionmessage.meta.h"

void cGcRewardMissionMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29795008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMissionMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMissionMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

