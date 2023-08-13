#include "tkvolumetriggertype.meta.h"

void cTkVolumeTriggerType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22314272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVolumeTriggerType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22315296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVolumeTriggerType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

