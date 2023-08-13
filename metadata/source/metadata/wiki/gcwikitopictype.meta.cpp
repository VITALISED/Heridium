#include "gcwikitopictype.meta.h"

void cGcWikiTopicType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22498464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWikiTopicType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22504960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWikiTopicType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

