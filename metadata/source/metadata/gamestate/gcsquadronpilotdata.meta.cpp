#include "gcsquadronpilotdata.meta.h"

void cGcSquadronPilotData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33224304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSquadronPilotData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSquadronPilotData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

