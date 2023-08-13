#include "gcheavyairsetting.meta.h"

void cGcHeavyAirSetting::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24120400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHeavyAirSetting::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHeavyAirSetting::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

