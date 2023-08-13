#include "gcbiomecondition.meta.h"

void cGcBiomeCondition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34202752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeCondition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeCondition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

