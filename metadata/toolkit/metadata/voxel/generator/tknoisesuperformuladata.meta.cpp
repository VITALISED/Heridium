#include "tknoisesuperformuladata.meta.h"

void cTkNoiseSuperFormulaData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20977072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseSuperFormulaData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseSuperFormulaData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

