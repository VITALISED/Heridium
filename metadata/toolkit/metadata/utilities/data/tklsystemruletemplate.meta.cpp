#include "tklsystemruletemplate.meta.h"

void cTkLSystemRuleTemplate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21244208);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemRuleTemplate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21246864);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemRuleTemplate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21247344);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

