#pragma once

#include "../../../../../../../../pch.h"
class cGcSentinelCoverComponentData
{
    static const unsigned __int64 muNameHash = 16281454183733089762;
    static const unsigned __int64 muTemplateHash = 5669221813774543817;
    static const int miNumMembers = 6;

    float mfHealthPercLostPerSecMin;
    float mfHealthPercLostPerSecMax;
    TkID<128> mSpawnEffectId;
    TkID<128> mDestroyEffectId;
    cTkFixedString<32,char> macEffectLocator;
    cTkFixedArray<TkID<128> > maCoverStateAnims;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
