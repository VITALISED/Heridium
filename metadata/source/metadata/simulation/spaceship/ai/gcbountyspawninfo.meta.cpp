#include "gcbountyspawninfo.meta.h"

void cGcBountySpawnInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23642288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBountySpawnInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23645136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBountySpawnInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23645904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

