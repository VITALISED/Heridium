#include "gcactiontrigger.meta.h"

void cGcActionTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28597136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcActionTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcActionTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

