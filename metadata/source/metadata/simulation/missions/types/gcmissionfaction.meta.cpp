#include "gcmissionfaction.meta.h"

void cGcMissionFaction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25053696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionFaction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25060336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionFaction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

