#include "gcterraintexturesettings.meta.h"

void cGcTerrainTextureSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27122480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTerrainTextureSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTerrainTextureSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

