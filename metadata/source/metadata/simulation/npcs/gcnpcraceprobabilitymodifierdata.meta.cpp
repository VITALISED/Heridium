#include "gcnpcraceprobabilitymodifierdata.meta.h"

void cGcNPCRaceProbabilityModifierData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24840528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCRaceProbabilityModifierData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24845824);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCRaceProbabilityModifierData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

