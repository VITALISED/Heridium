#include "gcfrigatetraitstrengthbytype.meta.h"

void cGcFrigateTraitStrengthByType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26476272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateTraitStrengthByType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateTraitStrengthByType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

