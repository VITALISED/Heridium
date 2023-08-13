#include "gcmissionsequencewaitforrefuel.meta.h"

void cGcMissionSequenceWaitForRefuel::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25054976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSequenceWaitForRefuel::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSequenceWaitForRefuel::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25062096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

