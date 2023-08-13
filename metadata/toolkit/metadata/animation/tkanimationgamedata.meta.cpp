#include "tkanimationgamedata.meta.h"

void cTkAnimationGameData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22423296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimationGameData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22426016);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimationGameData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

