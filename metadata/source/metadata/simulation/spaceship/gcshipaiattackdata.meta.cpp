#include "gcshipaiattackdata.meta.h"

void cGcShipAIAttackData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23555712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAIAttackData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23557216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipAIAttackData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

