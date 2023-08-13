#include "gcrewardteleport.meta.h"

void cGcRewardTeleport::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29442960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTeleport::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTeleport::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

