#pragma once

#include "../../../../../../../pch.h"
class cGcPrimaryAxis;

class cGcCreatureComponentData
{
    static const unsigned __int64 muNameHash = 2947846412521787800;
    static const unsigned __int64 muTemplateHash = 1601583875583004782;
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
    cTkVector mDiscoveryUIOffset;
    cTkDynamicArray<cGcCreatureDiscoveryThumbnailOverride> maThumbnailOverrides;
    bool mbUsePetLargeUIOverride;
    float mfPetLargeUIOverrideScaler;
    cTkVector mPetLargeUIOverrideOffset;

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
