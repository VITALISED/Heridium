#include "gccustominventorycomponentdata.meta.h"

void cGcCustomInventoryComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28600176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomInventoryComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28605168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomInventoryComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606528);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

