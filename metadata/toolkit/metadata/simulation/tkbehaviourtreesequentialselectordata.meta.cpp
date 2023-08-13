#include "tkbehaviourtreesequentialselectordata.meta.h"

void cTkBehaviourTreeSequentialSelectorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21703488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBehaviourTreeSequentialSelectorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

