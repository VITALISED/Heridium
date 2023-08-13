#include "gccreaturefootparticlesingledata.meta.h"

void cGcCreatureFootParticleSingleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28062080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureFootParticleSingleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28067296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureFootParticleSingleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28068672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

