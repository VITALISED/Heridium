#include "gcnpcanimationlist.meta.h"

void cGcNPCAnimationList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24948352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCAnimationList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCAnimationList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

