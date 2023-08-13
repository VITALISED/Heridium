#pragma once
#include "pch.h"

class cGcAlienRace;
class cGcPetData;
class cGcPetCustomisationData;

class cGcNPCDebugSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x1D427C136EB50E9D;
    static const unsigned __int64 muTemplateHash = 0x490BCD8D16A8F7C9;
    static const int miNumMembers = 16;

    cTkVector3 mPosition;
    cTkVector3 mFacing;
    cTkVector3 mUp;
    bool mbFollowWaypoints;
    float mfInitialDelay;
    cTkDynamicArray<cTkVector31> maWaypoints;
    bool mbPlayIdles;
    cTkDynamicArray<TkID<128>1> maIdles;
    bool mbRun;
    bool mbRidePet;
    cGcAlienRace mRace;
    cTkSeed mSeed;
    bool mbAddPetAccessories;
    float mfPetFollowOffset;
    cGcPetData mPet;
    cGcPetCustomisationData mPetAccessoryCustomisation;

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
