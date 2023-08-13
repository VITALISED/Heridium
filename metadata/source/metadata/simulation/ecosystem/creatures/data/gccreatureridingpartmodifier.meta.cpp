#include "gccreatureridingpartmodifier.meta.h"

void cGcCreatureRidingPartModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27953024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureRidingPartModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureRidingPartModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27956992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

