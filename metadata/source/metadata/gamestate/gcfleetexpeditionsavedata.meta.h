#pragma once

#include "../../../../../../pch.h"
class cGcExpeditionCategory;
class cGcExpeditionDuration;

class cGcFleetExpeditionSaveData
{
    static const unsigned __int64 muNameHash = 2078813609517786012;
    static const unsigned __int64 muTemplateHash = 1407843944352968328;
    static const int miNumMembers = 22;

    cTkSeed mSeed;
    unsigned __int64 mui64UA;
    cTkVector mSpawnPosition;
    cTkVector mTerminalPosition;
    float mfSpeedMultiplier;
    cTkDynamicArray<TkID<128> > maPowerups;
    cTkFixedString<256,char> macCustomName;
    TkID<128> mInterventionEventMissionID;
    unsigned __int64 mui64StartTime;
    unsigned __int64 mui64PauseTime;
    unsigned __int64 mui64TimeOfLastUAChange;
    int miNextEventToTrigger;
    cGcExpeditionCategory mExpeditionCategory;
    cGcExpeditionDuration mExpeditionDuration;
    cTkDynamicArray<int> maActiveFrigateIndices;
    cTkDynamicArray<int> maDamagedFrigateIndices;
    cTkDynamicArray<int> maDestroyedFrigateIndices;
    cTkDynamicArray<int> maAllFrigateIndices;
    int miNumberOfSuccessfulEventsThisExpedition;
    int miNumberOfFailedEventsThisExpedition;
    cTkDynamicArray<cGcExpeditionEventSaveData> maEvents;
    bool mbInterventionPhoneCallActivated;

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
