#include "gcmissionconsequenceremovecommunicatormessage.meta.h"

void cGcMissionConsequenceRemoveCommunicatorMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25652416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConsequenceRemoveCommunicatorMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConsequenceRemoveCommunicatorMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

