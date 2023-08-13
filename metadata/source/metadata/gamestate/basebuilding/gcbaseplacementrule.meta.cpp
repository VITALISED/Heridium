#include "gcbaseplacementrule.meta.h"

void cGcBasePlacementRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34364080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBasePlacementRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBasePlacementRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

