#include "tkanimposeexampleelement.meta.h"

void cTkAnimPoseExampleElement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22421824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimPoseExampleElement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimPoseExampleElement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

