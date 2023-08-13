#include "gcaudioareatriggercomponentdata.meta.h"

void cGcAudioAreaTriggerComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28864752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAudioAreaTriggerComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAudioAreaTriggerComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28874832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

