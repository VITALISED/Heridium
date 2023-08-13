#include "tkbehaviourtreesucceeddecoratordata.meta.h"

void cTkBehaviourTreeSucceedDecoratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21703840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBehaviourTreeSucceedDecoratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBehaviourTreeSucceedDecoratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

