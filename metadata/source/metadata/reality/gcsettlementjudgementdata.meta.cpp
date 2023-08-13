#include "gcsettlementjudgementdata.meta.h"

void cGcSettlementJudgementData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29334064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementJudgementData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementJudgementData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

