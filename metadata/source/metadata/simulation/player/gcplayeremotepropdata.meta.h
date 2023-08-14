#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/player/gchand.meta.h"
#include "../../../../../metadata/source/metadata/simulation/player/gcscaneffectdata.meta.h"

class cGcPlayerEmotePropData
{
public:
    static const unsigned __int64 muNameHash = 0x7E08658A660A58D4;
    static const unsigned __int64 muTemplateHash = 0x3E4771511FBAD7C7;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macModel;
    float mfScale;
    cGcHand mHand;
    bool mbIsHologram;
    cTkFixedString<64,char> macScanEffectNodeName;
    cGcScanEffectData mScanEffect;
    float mfDelayTime;

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
