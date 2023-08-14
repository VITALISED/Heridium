#pragma once
#include "../../../../pch.h"

class cGcAudioPulseDemo
{
public:
    static const unsigned __int64 muNameHash = 0xF13F97A441A8794A;
    static const unsigned __int64 muTemplateHash = 0x1A9386C1D74ECD0;
    static const int miNumMembers = 6;

    float mfMixRateSeconds;
    cTkVector2 mPlanet;
    cTkVector2 mSpace;
    cTkVector2 mSpaceStation;
    cTkVector2 mInWarp;
    cTkVector2 mWanted;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
