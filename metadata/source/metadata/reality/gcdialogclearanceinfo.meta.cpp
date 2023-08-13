#include "gcdialogclearanceinfo.meta.h"

void cGcDialogClearanceInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30582720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDialogClearanceInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDialogClearanceInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

