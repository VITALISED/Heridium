#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/behaviours/data/gcprimaryaxis.meta.h"
#include "../../../../../metadata/source/metadata/simulation/particles/gcreplacementeffectdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/particles/gccreaturediscoverythumbnailoverride.meta.h"

class cGcCreatureComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x28E8DAB19EC55198;
    static const unsigned __int64 muTemplateHash = 0x1639F80C9E1E506E;
    static const int miNumMembers = 14;

    TkID<128> mId;
    cGcPrimaryAxis mAxis;
    float mfScaler;
    float mfPetIndoorScaler;
    TkID<128> mDeathEffect;
    cTkDynamicArray<cGcReplacementEffectData> maReplacementImpacts;
    float mfAccessoryPitchOffset;
    float mfDiscoveryFurScaler;
    float mfDiscoveryUIScaler;
    cTkVector3 mDiscoveryUIOffset;
    cTkDynamicArray<cGcCreatureDiscoveryThumbnailOverride> maThumbnailOverrides;
    bool mbUsePetLargeUIOverride;
    float mfPetLargeUIOverrideScaler;
    cTkVector3 mPetLargeUIOverrideOffset;

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
