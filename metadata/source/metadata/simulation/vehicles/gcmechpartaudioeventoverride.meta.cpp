#include "gcmechpartaudioeventoverride.meta.h"

void cGcMechPartAudioEventOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23265488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechPartAudioEventOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23267232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechPartAudioEventOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

