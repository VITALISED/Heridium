#include "gcbehaviourcheckdeathdata.meta.h"

void cGcBehaviourCheckDeathData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28283568);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourCheckDeathData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28291168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBehaviourCheckDeathData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23392176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

