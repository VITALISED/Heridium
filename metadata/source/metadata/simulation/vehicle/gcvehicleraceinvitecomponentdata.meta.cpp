#include "gcvehicleraceinvitecomponentdata.meta.h"

void cGcVehicleRaceInviteComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23182560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleRaceInviteComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleRaceInviteComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

