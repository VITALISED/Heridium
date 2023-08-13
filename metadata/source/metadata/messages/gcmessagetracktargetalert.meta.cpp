#include "gcmessagetracktargetalert.meta.h"

void cGcMessageTrackTargetAlert::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30998464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageTrackTargetAlert::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageTrackTargetAlert::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

