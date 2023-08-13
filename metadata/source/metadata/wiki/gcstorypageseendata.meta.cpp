#include "gcstorypageseendata.meta.h"

void cGcStoryPageSeenData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22628464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStoryPageSeenData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22632432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStoryPageSeenData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

