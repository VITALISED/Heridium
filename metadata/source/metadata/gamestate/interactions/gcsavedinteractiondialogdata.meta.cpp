#include "gcsavedinteractiondialogdata.meta.h"

void cGcSavedInteractionDialogData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33120032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSavedInteractionDialogData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSavedInteractionDialogData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

