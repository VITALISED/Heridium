#include "gcbehaviourlookdata.meta.h"

void cGcBehaviourLookData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28286480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourLookData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28291888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBehaviourLookData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28293424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

