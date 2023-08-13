#include "gcbasedefencestatusaction.meta.h"

void cGcBaseDefenceStatusAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28486800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseDefenceStatusAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28494880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseDefenceStatusAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28496768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

