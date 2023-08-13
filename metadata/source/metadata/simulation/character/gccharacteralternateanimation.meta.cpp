#include "gccharacteralternateanimation.meta.h"

void cGcCharacterAlternateAnimation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28978464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterAlternateAnimation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28986832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterAlternateAnimation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

