#include "gcmissionsequencebroadcastmessage.meta.h"

void cGcMissionSequenceBroadcastMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25532608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSequenceBroadcastMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25538112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSequenceBroadcastMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

