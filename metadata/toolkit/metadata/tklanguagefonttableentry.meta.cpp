#include "tklanguagefonttableentry.meta.h"

void cTkLanguageFontTableEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21599328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLanguageFontTableEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLanguageFontTableEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

