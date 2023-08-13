#include "gcpassivefrigateincomearray.meta.h"

void cGcPassiveFrigateIncomeArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26307920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPassiveFrigateIncomeArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26312880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPassiveFrigateIncomeArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26313920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

