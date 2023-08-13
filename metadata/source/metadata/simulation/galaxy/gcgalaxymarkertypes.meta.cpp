#include "gcgalaxymarkertypes.meta.h"

void cGcGalaxyMarkerTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26694352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxyMarkerTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26697904);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxyMarkerTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26698800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

