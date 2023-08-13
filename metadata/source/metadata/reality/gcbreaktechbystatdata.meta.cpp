#include "gcbreaktechbystatdata.meta.h"

void cGcBreakTechByStatData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30777376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBreakTechByStatData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBreakTechByStatData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

