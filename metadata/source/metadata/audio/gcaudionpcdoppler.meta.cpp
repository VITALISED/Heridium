#include "gcaudionpcdoppler.meta.h"

void cGcAudioNPCDoppler::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35051344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudioNPCDoppler::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35053648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudioNPCDoppler::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35054176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

