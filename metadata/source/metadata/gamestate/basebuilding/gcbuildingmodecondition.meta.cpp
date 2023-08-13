#include "gcbuildingmodecondition.meta.h"

void cGcBuildingModeCondition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34203840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingModeCondition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingModeCondition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

