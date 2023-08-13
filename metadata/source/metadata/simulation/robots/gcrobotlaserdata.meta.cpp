#include "gcrobotlaserdata.meta.h"

void cGcRobotLaserData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24310816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRobotLaserData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRobotLaserData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

