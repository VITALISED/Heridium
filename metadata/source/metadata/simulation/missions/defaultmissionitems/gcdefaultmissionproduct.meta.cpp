#include "gcdefaultmissionproduct.meta.h"

void cGcDefaultMissionProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25648816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultMissionProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25653856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDefaultMissionProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

