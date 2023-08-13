#pragma once
#include "../../../../../../pch.h"

class cGcFrigateClass;
class cGcAlienRace;
class cGcInventoryClass;

class cGcFleetFrigateSaveData
{
    static const unsigned __int64 muNameHash = 0xE6F863FE26F77270;
    static const unsigned __int64 muTemplateHash = 0x1C0EB21E6164191A;
    static const int miNumMembers = 16;

    cTkSeed mResourceSeed;
    cTkSeed mHomeSystemSeed;
    cTkSeed mForcedTraitsSeed;
    unsigned __int64 mui64TimeOfLastIncomeCollection;
    cTkFixedString<256,char> macCustomName;
    cGcFrigateClass mFrigateClass;
    cGcAlienRace mRace;
    cGcInventoryClass mInventoryClass;
    int miTotalNumberOfExpeditions;
    int miTotalNumberOfSuccessfulEvents;
    int miTotalNumberOfFailedEvents;
    int miNumberOfTimesDamaged;
    cTkDynamicArray<TkID<128> > maTraitIDs;
    cTkDynamicArray<int> maStats;
    int miRepairsMade;
    int miDamageTaken;

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
