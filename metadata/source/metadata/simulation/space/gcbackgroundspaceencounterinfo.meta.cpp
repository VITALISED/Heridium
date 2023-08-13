#include "gcbackgroundspaceencounterinfo.meta.h"

void cGcBackgroundSpaceEncounterInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23382768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBackgroundSpaceEncounterInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

