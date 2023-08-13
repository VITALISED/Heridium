#include "gcdefaultmissionsubstance.meta.h"

void cGcDefaultMissionSubstance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25649392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultMissionSubstance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDefaultMissionSubstance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

