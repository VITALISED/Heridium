#include "gcaudiopulsedemo.meta.h"

void cGcAudioPulseDemo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35051936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudioPulseDemo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35053728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudioPulseDemo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35054224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

