#include "gcseasonsavestateondeath.meta.h"

void cGcSeasonSaveStateOnDeath::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33222640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonSaveStateOnDeath::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33228912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonSaveStateOnDeath::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

