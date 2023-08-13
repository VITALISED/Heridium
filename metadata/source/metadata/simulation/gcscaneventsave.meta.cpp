#include "gcscaneventsave.meta.h"

void cGcScanEventSave::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26312304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventSave::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEventSave::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314448);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

