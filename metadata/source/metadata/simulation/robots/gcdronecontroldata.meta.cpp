#include "gcdronecontroldata.meta.h"

void cGcDroneControlData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24381488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDroneControlData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24386560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDroneControlData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24387408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

