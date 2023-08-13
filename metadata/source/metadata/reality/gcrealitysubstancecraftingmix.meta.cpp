#include "gcrealitysubstancecraftingmix.meta.h"

void cGcRealitySubstanceCraftingMix::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30100752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealitySubstanceCraftingMix::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealitySubstanceCraftingMix::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

