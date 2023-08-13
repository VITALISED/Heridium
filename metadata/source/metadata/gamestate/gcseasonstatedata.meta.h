#pragma once

#include "../../../../../../pch.h"
class cGcSeasonSaveStateOnDeath;

class cGcSeasonStateData
{
    static const unsigned __int64 muNameHash = 5460358153749092980;
    static const unsigned __int64 muTemplateHash = 17951919291607497523;
    static const int miNumMembers = 8;

    cTkDynamicArray<float> maMilestoneValues;
    cTkDynamicArray<__int16> maRewardCollected;
    int miPinnedStage;
    int miPinnedMilestone;
    cTkDynamicArray<unsigned __int64> maRendezvousUAs;
    bool mbHasCollectedFinalReward;
    cTkDynamicArray<cGcUAProtectedLocations> maProtectedEvents;
    cGcSeasonSaveStateOnDeath mStateOnDeath;

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
