#include "gcplayercharacterstatedata.meta.h"

void cGcPlayerCharacterStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24718240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerCharacterStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerCharacterStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

