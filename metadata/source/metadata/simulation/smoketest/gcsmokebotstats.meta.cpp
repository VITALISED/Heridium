#include "gcsmokebotstats.meta.h"

void cGcSmokeBotStats::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24231008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSmokeBotStats::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSmokeBotStats::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

