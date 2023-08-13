#include "gcnumberedtextlist.meta.h"

void cGcNumberedTextList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30353696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNumberedTextList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNumberedTextList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

