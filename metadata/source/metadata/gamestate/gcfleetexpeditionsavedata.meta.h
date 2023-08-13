#pragma once
#include "pch.h"

class cGcExpeditionCategory;
class cGcExpeditionDuration;

class cGcFleetExpeditionSaveData
{
public:
    static const unsigned __int64 muNameHash = 0x1CD96DF6BD8E239C;
    static const unsigned __int64 muTemplateHash = 0x1389AA9BBA57EE88;
    static const int miNumMembers = 22;

    cTkSeed mSeed;
    unsigned __int64 mui64UA;
    cTkVector3 mSpawnPosition;
    cTkVector3 mTerminalPosition;
    float mfSpeedMultiplier;
    cTkDynamicArray<TkID<128>1> maPowerups;
    cTkFixedString<256,char> macCustomName;
    TkID<128> mInterventionEventMissionID;
    unsigned __int64 mui64StartTime;
    unsigned __int64 mui64PauseTime;
    unsigned __int64 mui64TimeOfLastUAChange;
    int miNextEventToTrigger;
    cGcExpeditionCategory mExpeditionCategory;
    cGcExpeditionDuration mExpeditionDuration;
    cTkDynamicArray<int1> maActiveFrigateIndices;
    cTkDynamicArray<int1> maDamagedFrigateIndices;
    cTkDynamicArray<int1> maDestroyedFrigateIndices;
    cTkDynamicArray<int1> maAllFrigateIndices;
    int miNumberOfSuccessfulEventsThisExpedition;
    int miNumberOfFailedEventsThisExpedition;
    cTkDynamicArray<cGcExpeditionEventSaveData1> maEvents;
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
