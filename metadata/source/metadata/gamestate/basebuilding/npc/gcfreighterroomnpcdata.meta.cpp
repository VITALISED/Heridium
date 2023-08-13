#include "gcfreighterroomnpcdata.meta.h"

void cGcFreighterRoomNPCData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34073056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterRoomNPCData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterRoomNPCData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

