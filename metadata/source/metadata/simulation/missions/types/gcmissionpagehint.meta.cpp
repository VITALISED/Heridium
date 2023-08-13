#include "gcmissionpagehint.meta.h"

void cGcMissionPageHint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25054656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionPageHint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionPageHint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25062048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

