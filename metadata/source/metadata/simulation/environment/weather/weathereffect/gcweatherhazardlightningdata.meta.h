#pragma once
#include "../../../../../../../../../pch.h"

class cTkModelResource;
class cTkModelResource;

class cGcWeatherHazardLightningData
{
    static const unsigned __int64 muNameHash = 0xD85F7F00F1F64BD1;
    static const unsigned __int64 muTemplateHash = 0xC42BA76B22AFE894;
    static const int miNumMembers = 17;

    cTkModelResource mIndicatorDecal;
    cTkModelResource mStaticDecal;
    float mfMinRadius;
    float mfMaxRadius;
    float mfDecalFullGrowthProgress;
    float mfNumFlashes;
    float mfFlashStartProgress;
    float mfEarliestImpact;
    float mfEarliestImpactFirstInstance;
    float mfStormDuration;
    int miMinStrikes;
    int miMaxStrikes;
    TkID<128> mShakeID;
    TkID<128> mImpactParticle;
    TkID<128> mDamageID;
    float mfFullDamageRadius;
    float mfDamageRadius;

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
