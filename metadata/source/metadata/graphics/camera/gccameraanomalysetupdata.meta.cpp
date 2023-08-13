#include "gccameraanomalysetupdata.meta.h"

void cGcCameraAnomalySetupData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31501920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraAnomalySetupData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraAnomalySetupData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

