#include "gcsentinelrobotcomponentdata.meta.h"

void cGcSentinelRobotComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24312352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelRobotComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelRobotComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

