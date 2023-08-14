#pragma once
#include "../../../../../pch.h"

enum eCloudiness
{
    ECloudiness_CloudyWithClearSpells = 0,
    ECloudiness_ClearWithCloudySpells = 1,
};

class cGcPlanetCloudProperties
{
public:
    static const unsigned __int64 muNameHash = 0x96E42AD217EA55B2;
    static const unsigned __int64 muTemplateHash = 0x9F922C89C96A1B4F;
    static const int miNumMembers = 12;

    cTkSeed mSeed;
    float mfCoverage1;
    float mfCoverage2;
    float mfCoverage3;
    float mfOffset1;
    float mfOffset2;
    float mfOffset3;
    cTkVector2 mCoverExtremes;
    float mfRatio;
    float mfRateOfChange;
    float mfSecondaryRateOfChange;
    eCloudiness meCloudiness;

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
