#include "gcbehaviourregisterattackerdata.meta.h"

void cGcBehaviourRegisterAttackerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28153936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourRegisterAttackerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28159408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBehaviourRegisterAttackerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

