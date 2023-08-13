#include "gcaudiowwisertpcs.meta.h"

void cGcAudioWwiseRTPCs::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35052656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudioWwiseRTPCs::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35053888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudioWwiseRTPCs::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35054320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

