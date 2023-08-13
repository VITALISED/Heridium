#include "gcwonderrecordcustomdata.meta.h"

void cGcWonderRecordCustomData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22501088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderRecordCustomData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderRecordCustomData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

