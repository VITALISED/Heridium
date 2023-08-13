#include "gcmissionsequencewaitforfreighterpods.meta.h"

void cGcMissionSequenceWaitForFreighterPods::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25157856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSequenceWaitForFreighterPods::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25161024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSequenceWaitForFreighterPods::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25162144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

