#pragma once
#include "../../../../../../pch.h"

enum eTestEncounterType
{
    ETestEncounterType_AnyEncounter = 0,
    ETestEncounterType_AnyObject = 1,
    ETestEncounterType_SpecificObject = 2,
    ETestEncounterType_Trader = 3,
    ETestEncounterType_AbandonedFreighter = 4,
    ETestEncounterType_AnyEncounterOtherThanTheNamedOne = 5,
};

class cGcMissionConditionPulseEncounterActive
{
public:
    static const unsigned __int64 muNameHash = 0x56207A2C2009340;
    static const unsigned __int64 muTemplateHash = 0xAB5AE414E5866353;
    static const int miNumMembers = 3;

    eTestEncounterType meTestEncounterType;
    TkID<128> mSpecificObjectID;
    bool mbRequireFullySpawned;

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
