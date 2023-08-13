#include "gcrewardcommunicatormessage.meta.h"

void cGcRewardCommunicatorMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29974288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCommunicatorMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCommunicatorMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

