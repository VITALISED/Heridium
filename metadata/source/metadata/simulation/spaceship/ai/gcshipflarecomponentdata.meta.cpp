#include "gcshipflarecomponentdata.meta.h"

void cGcShipFlareComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23643968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipFlareComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23645456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipFlareComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23646192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

