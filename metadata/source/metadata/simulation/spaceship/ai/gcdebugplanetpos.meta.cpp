#include "gcdebugplanetpos.meta.h"

void cGcDebugPlanetPos::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23643104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDebugPlanetPos::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23645216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDebugPlanetPos::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23645952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

