#include "gcmissionconsequenceremovecommunicatortakeoffmessage.meta.h"

void cGcMissionConsequenceRemoveCommunicatorTakeOffMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25652688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConsequenceRemoveCommunicatorTakeOffMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConsequenceRemoveCommunicatorTakeOffMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

