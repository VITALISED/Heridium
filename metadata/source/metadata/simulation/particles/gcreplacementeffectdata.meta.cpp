#include "gcreplacementeffectdata.meta.h"

void cGcReplacementEffectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24719152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcReplacementEffectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24721040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcReplacementEffectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24722080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

