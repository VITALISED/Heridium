#include "gcmultispecificitementry.meta.h"

void cGcMultiSpecificItemEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30352368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMultiSpecificItemEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMultiSpecificItemEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

