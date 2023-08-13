#include "tktriggerfeedbackdata.meta.h"

void cTkTriggerFeedbackData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21097200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkTriggerFeedbackData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkTriggerFeedbackData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

