#include "gcmechaudioevent.meta.h"

void cGcMechAudioEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23384912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechAudioEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechAudioEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

