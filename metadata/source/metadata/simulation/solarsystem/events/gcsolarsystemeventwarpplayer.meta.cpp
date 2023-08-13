#include "gcsolarsystemeventwarpplayer.meta.h"

void cGcSolarSystemEventWarpPlayer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24233344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemEventWarpPlayer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

