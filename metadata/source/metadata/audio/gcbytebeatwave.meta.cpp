#include "gcbytebeatwave.meta.h"

void cGcByteBeatWave::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34973568);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcByteBeatWave::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34976480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcByteBeatWave::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34977408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

