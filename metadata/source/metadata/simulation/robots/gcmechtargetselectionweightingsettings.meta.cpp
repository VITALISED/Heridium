#include "gcmechtargetselectionweightingsettings.meta.h"

void cGcMechTargetSelectionWeightingSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24310288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechTargetSelectionWeightingSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechTargetSelectionWeightingSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

