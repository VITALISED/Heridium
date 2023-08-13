#include "gcheavyaircolourdata.meta.h"

void cGcHeavyAirColourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24119856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHeavyAirColourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHeavyAirColourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

