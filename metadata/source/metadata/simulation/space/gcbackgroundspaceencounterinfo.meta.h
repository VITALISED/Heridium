#pragma once
#include "../../../../../../../pch.h"

class cGcBackgroundSpaceEncounterSpawnConditions;
class cGcPulseEncounterSpawnObject;

class cGcBackgroundSpaceEncounterInfo
{
    static const unsigned __int64 muNameHash = 0x9803054FC61F20F4;
    static const unsigned __int64 muTemplateHash = 0x4D053C039EED67A0;
    static const int miNumMembers = 8;

    TkID<128> mId;
    cGcBackgroundSpaceEncounterSpawnConditions mSpawnConditions;
    float mfSelectionWeighting;
    float mfSpawnChance;
    float mfSpawnDistance;
    float mfMinDuration;
    float mfDespawnDistance;
    cGcPulseEncounterSpawnObject mEncounter;

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
