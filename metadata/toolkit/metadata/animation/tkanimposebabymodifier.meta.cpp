#include "tkanimposebabymodifier.meta.h"

void cTkAnimPoseBabyModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22420080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimPoseBabyModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimPoseBabyModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

