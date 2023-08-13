#include "tklanguagesalloweddata.meta.h"

void cTkLanguagesAllowedData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21599840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLanguagesAllowedData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21603888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLanguagesAllowedData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

