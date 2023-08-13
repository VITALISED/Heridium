#include "gcbasestatcondition.meta.h"

void cGcBaseStatCondition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34202416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseStatCondition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseStatCondition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

