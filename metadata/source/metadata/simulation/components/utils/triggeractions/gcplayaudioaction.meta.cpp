#include "gcplayaudioaction.meta.h"

void cGcPlayAudioAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28492688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayAudioAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28496080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayAudioAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497584);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

