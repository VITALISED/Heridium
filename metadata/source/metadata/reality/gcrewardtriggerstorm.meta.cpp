#include "gcrewardtriggerstorm.meta.h"

void cGcRewardTriggerStorm::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29444336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTriggerStorm::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTriggerStorm::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

