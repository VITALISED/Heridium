#pragma once
#include "../../../../pch.h"

enum eGlobalMission
{
    EGlobalMission_Atlas = 0,
    EGlobalMission_BlackHole = 1,
    EGlobalMission_Anomaly = 2,
    EGlobalMission_Explore = 3,
};

class cGcRewardChangeGlobalMission
{
public:
    static const unsigned __int64 muNameHash = 0xAD03B051106BCE0A;
    static const unsigned __int64 muTemplateHash = 0x3B3EF978A93CD288;
    static const int miNumMembers = 1;

    eGlobalMission meGlobalMission;

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
