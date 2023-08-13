#include "gcrewardcustomexpeditionlogentry.meta.h"

void cGcRewardCustomExpeditionLogEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29976448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCustomExpeditionLogEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCustomExpeditionLogEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29981056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

