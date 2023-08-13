#include "gcsettlementcustomjudgement.meta.h"

void cGcSettlementCustomJudgement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29449408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementCustomJudgement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29452240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementCustomJudgement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

