#pragma once
#include "../../../../../../../pch.h"

class cGcCreatureRoles;
class cGcCreatureTypes;
class cGcCreatureSizeClasses;
class cGcCreatureSizeClasses;
class cGcCreatureGenerationDensity;
class cGcCreatureActiveTime;

class cGcCreatureRoleDescription
{
    static const unsigned __int64 muNameHash = 0xA1B4C2EA26DFEA74;
    static const unsigned __int64 muTemplateHash = 0x6875F7793735EEE2;
    static const int miNumMembers = 13;

    cGcCreatureRoles mRole;
    cGcCreatureTypes mForceType;
    TkID<128> mForceID;
    TkID<128> mRequireTag;
    cGcCreatureSizeClasses mMinSize;
    cGcCreatureSizeClasses mMaxSize;
    int miMinGroupSize;
    int miMaxGroupSize;
    cGcCreatureGenerationDensity mDensity;
    cGcCreatureActiveTime mActiveTime;
    float mfProbabilityOfBeingEnabled;
    float mfIncreasedSpawnDistance;
    TkID<256> mFilter;

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
