#include "gcgalaxywaypointtypes.meta.h"

void cGcGalaxyWaypointTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26603024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalaxyWaypointTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26604208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalaxyWaypointTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

