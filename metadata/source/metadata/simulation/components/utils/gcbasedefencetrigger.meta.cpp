#include "gcbasedefencetrigger.meta.h"

void cGcBaseDefenceTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28598064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseDefenceTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseDefenceTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

