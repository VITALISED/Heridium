#include "gcsolarsystemeventwarpplayer.meta.h"

void cGcSolarSystemEventWarpPlayer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24233344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemEventWarpPlayer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234928);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235776);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24222992);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24225296);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSolarSystemEventWarpPlayer::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24207840);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24212736);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSolarSystemEventWarpPlayer::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24217488);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSolarSystemEventWarpPlayer::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24226688);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSolarSystemEventWarpPlayer::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24224256);
    return classPtrDestroyFunc(lPtr);
}

