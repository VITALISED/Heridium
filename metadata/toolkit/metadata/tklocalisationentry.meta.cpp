#include "tklocalisationentry.meta.h"

void cTkLocalisationEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21600128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLocalisationEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLocalisationEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

