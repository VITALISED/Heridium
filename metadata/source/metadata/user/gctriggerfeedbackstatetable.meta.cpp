#include "gctriggerfeedbackstatetable.meta.h"

void cGcTriggerFeedbackStateTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22724944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTriggerFeedbackStateTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22727024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTriggerFeedbackStateTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

