#pragma once
#include "pch.h"

enum eFaceDir
{
    EFaceDir_Random = 0,
    EFaceDir_TowardsPlayer = 1,
    EFaceDir_SpawnerAt = 2,
};

class cGcPlayerExperienceSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x76E523097495B90;
    static const unsigned __int64 muTemplateHash = 0xB547ACA99002043A;
    static const int miNumMembers = 10;

    TkID<128> mArchetype;
    TkID<128> mAppearAnim;
    TkID<128> mSpawnLocator;
    TkID<256> mSpawnLocatorScanEvent;
    eFaceDir meFaceDir;
    float mfMinDist;
    float mfMaxDist;
    cTkFixedArray<int, 7> maMinNum;
    cTkFixedArray<int, 7> maMaxNum;
    float mfActiveTime;

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
