#include "tklanguagefonttable.meta.h"

void cTkLanguageFontTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21599072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLanguageFontTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLanguageFontTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

