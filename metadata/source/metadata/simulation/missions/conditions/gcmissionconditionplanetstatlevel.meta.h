#pragma once
#include "pch.h"

class cTkEqualityEnum;

class cGcMissionConditionPlanetStatLevel
{
public:
    static const unsigned __int64 muNameHash = 0x5E041EB212BC9D8D;
    static const unsigned __int64 muTemplateHash = 0xFEB8071F61919F1E;
    static const int miNumMembers = 8;

    TkID<128> mStat;
    int miAmount;
    unsigned __int64 mui64SpecificUA;
    bool mbUseCurrentUA;
    bool mbCalculateUAFromSeasonData;
    bool mbCalculateUAFromMilestoneIndex;
    bool mbTakeAmountFromSeasonData;
    cTkEqualityEnum mTest;

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
