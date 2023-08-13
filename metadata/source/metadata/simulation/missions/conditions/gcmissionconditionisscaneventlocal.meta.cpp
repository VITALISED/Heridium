#include "gcmissionconditionisscaneventlocal.meta.h"

void cGcMissionConditionIsScanEventLocal::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25940464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionIsScanEventLocal::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25945152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConditionIsScanEventLocal::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25946608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

