#include "gcpassivefrigateincome.meta.h"

void cGcPassiveFrigateIncome::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26478432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPassiveFrigateIncome::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPassiveFrigateIncome::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

