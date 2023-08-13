#include "gcsmokebotreport.meta.h"

void cGcSmokeBotReport::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24230720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSmokeBotReport::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSmokeBotReport::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

