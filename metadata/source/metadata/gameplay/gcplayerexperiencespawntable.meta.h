#pragma once
#include "../../../../pch.h"

enum eExperienceSpawnType
{
    EExperienceSpawnType_Freighter = 0,
    EExperienceSpawnType_Mission = 1,
};
#include "../../../../metadata/source/metadata/gameplay/gcplayerexperiencespawndata.meta.h"

class cGcPlayerExperienceSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0xA1B202DE9A10A705;
    static const unsigned __int64 muTemplateHash = 0xE2D862A8402D7F11;
    static const int miNumMembers = 6;

    TkID<128> mEvent;
    eExperienceSpawnType meExperienceSpawnType;
    float mfResponseRate;
    float mfPerSpawnDelay;
    bool mbDestroy;
    cTkDynamicArray<cGcPlayerExperienceSpawnData> maSpawns;

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
