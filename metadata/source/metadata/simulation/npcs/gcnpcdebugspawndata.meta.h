#pragma once

#include "../../../../../../../pch.h"
class cGcAlienRace;
class cGcPetData;
class cGcPetCustomisationData;

class cGcNPCDebugSpawnData
{
    static const unsigned __int64 muNameHash = 2108383998466395805;
    static const unsigned __int64 muTemplateHash = 5263526595366811593;
    static const int miNumMembers = 16;

    cTkVector mPosition;
    cTkVector mFacing;
    cTkVector mUp;
    bool mbFollowWaypoints;
    float mfInitialDelay;
    cTkDynamicArray<cTkVector> maWaypoints;
    bool mbPlayIdles;
    cTkDynamicArray<TkID<128> > maIdles;
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
