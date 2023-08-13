#include "gcaudio3pointdopplerdata.meta.h"

void cGcAudio3PointDopplerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35051040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudio3PointDopplerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35053568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudio3PointDopplerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35054128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

