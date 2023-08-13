#include "gcaudiowwiseevents.meta.h"

void cGcAudioWwiseEvents::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35052336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudioWwiseEvents::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35053808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudioWwiseEvents::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35054272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

