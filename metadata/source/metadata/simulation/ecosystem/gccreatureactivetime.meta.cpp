#include "gccreatureactivetime.meta.h"

void cGcCreatureActiveTime::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27662448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureActiveTime::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27668816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureActiveTime::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

