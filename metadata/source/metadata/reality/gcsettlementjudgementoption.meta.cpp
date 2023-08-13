#include "gcsettlementjudgementoption.meta.h"

void cGcSettlementJudgementOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29334544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementJudgementOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementJudgementOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

