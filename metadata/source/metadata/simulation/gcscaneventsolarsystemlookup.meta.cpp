#include "gcscaneventsolarsystemlookup.meta.h"

void cGcScanEventSolarSystemLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26312592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventSolarSystemLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEventSolarSystemLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

