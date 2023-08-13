#include "gcbiomelistperstartype.meta.h"

void cGcBiomeListPerStarType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24229296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeListPerStarType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBiomeListPerStarType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

