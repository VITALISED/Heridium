#include "tklsystemrulesdata.meta.h"

void cTkLSystemRulesData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21244496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemRulesData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21246944);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemRulesData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21247392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

