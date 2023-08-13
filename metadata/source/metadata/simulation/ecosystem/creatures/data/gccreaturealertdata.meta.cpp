#include "gccreaturealertdata.meta.h"

void cGcCreatureAlertData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28157008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureAlertData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28160048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureAlertData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

