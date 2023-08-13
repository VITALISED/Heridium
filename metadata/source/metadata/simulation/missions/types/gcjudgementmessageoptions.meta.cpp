#include "gcjudgementmessageoptions.meta.h"

void cGcJudgementMessageOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25052400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcJudgementMessageOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcJudgementMessageOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

