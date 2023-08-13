#include "tkparticleburstdata.meta.h"

void cTkParticleBurstData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21245584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkParticleBurstData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21247184);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkParticleBurstData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21247536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

