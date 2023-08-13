#include "gcshiphudtargeticondata.meta.h"

void cGcShipHUDTargetIconData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31230192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipHUDTargetIconData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipHUDTargetIconData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

