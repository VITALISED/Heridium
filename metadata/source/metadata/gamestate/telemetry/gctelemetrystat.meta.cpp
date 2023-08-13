#include "gctelemetrystat.meta.h"

void cGcTelemetryStat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(32888832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTelemetryStat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(32889232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTelemetryStat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(32889360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

