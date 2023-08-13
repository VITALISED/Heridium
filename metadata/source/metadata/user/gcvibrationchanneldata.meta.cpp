#include "gcvibrationchanneldata.meta.h"

void cGcVibrationChannelData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22629392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVibrationChannelData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22632672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVibrationChannelData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

