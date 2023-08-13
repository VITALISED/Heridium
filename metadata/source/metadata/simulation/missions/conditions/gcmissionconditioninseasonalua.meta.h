#pragma once
#include "pch.h"

class cGcMissionConditionInSeasonalUA
{
public:
    static const unsigned __int64 muNameHash = 0x15FCC555BAF3FC21;
    static const unsigned __int64 muTemplateHash = 0xE56B9FAF2C3575E4;
    static const int miNumMembers = 5;

    int miSpecificRendevousPlanetIndex;
    bool mbSpecificIndexOnlyNeedsToMatchSystem;
    bool mbTakeIndexFromSeasonData;
    bool mbTakeIndexFromMilestoneStage;
    bool mbCompleteIfRendezvousDone;

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
