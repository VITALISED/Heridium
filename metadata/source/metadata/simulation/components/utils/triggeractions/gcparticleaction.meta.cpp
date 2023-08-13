#include "gcparticleaction.meta.h"

void cGcParticleAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28492096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcParticleAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcParticleAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497344);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

