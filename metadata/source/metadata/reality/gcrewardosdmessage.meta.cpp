#include "gcrewardosdmessage.meta.h"

void cGcRewardOSDMessage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29799392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardOSDMessage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29802480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardOSDMessage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

