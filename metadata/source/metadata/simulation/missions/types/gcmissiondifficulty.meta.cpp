#include "gcmissiondifficulty.meta.h"

void cGcMissionDifficulty::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25053376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionDifficulty::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionDifficulty::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

