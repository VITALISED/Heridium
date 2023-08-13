#include "gcsentinelencounteroverride.meta.h"

void cGcSentinelEncounterOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24311088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelEncounterOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelEncounterOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

