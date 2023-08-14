#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcexpeditioncategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcexpeditionduration.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcexpeditioneventsavedata.meta.h"

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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
