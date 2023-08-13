#include "gcbehaviourlegacydata.meta.h"

void cGcBehaviourLegacyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28286160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourLegacyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28291808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBehaviourLegacyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28293376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

