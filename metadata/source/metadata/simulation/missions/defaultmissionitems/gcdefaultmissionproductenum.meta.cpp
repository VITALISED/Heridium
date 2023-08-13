#include "gcdefaultmissionproductenum.meta.h"

void cGcDefaultMissionProductEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25649072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultMissionProductEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25653936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDefaultMissionProductEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

