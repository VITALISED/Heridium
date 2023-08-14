#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcexternalobjectlistoptions.meta.h"

class cGcExternalObjectFileList
{
public:
    static const unsigned __int64 muNameHash = 0x76D3572C2A9662D2;
    static const unsigned __int64 muTemplateHash = 0x333FC04513700C76;
    static const int miNumMembers = 14;

    TkID<128> mId;
    bool mbOnlyOnExtremeWeather;
    bool mbOnlyOnExtremeSentinels;
    bool mbOnlyOnDeepWater;
    bool mbNotOnExtremePlanets;
    bool mbNotOnStartPlanets;
    bool mbNotOnWeirdPlanets;
    bool mbNotOnDeadPlanets;
    bool mbForceOnSeasonStart;
    cGcBiomeType mOnlyOnBiome;
    float mfProbabilityOfBeingActive;
    int miMinFilesToChoose;
    int miMaxFilesToChoose;
    cTkDynamicArray<cGcExternalObjectListOptions> maExternalObjectFiles;

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
