#include "tkdynamicresscalingsettings.meta.h"

void cTkDynamicResScalingSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22143680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkDynamicResScalingSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22147248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkDynamicResScalingSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22148112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

