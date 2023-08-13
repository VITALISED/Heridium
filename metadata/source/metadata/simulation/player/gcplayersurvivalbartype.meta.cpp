#include "gcplayersurvivalbartype.meta.h"

void cGcPlayerSurvivalBarType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24599296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerSurvivalBarType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24602128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerSurvivalBarType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24603008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

