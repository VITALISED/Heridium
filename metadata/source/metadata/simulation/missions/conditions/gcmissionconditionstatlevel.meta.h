#pragma once
#include "pch.h"

class cTkEqualityEnum;

class cGcMissionConditionStatLevel
{
public:
    static const unsigned __int64 muNameHash = 0xA56864A865FEBE6D;
    static const unsigned __int64 muTemplateHash = 0x8AD6D9760D21ED40;
    static const int miNumMembers = 9;

    TkID<128> mStat;
    TkID<128> mStatGroup;
    int miLevel;
    int miLevelledStatRank;
    bool mbTakeLevelFromSeasonData;
    bool mbForceIgnoreLevelledStat;
    TkID<128> mCompareStat;
    int miDisplayMilestoneNumber;
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
