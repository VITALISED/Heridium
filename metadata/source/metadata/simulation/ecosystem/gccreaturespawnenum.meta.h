#pragma once
#include "../../../../../../../pch.h"

enum eIncrementor
{
    EIncrementor_None = 0,
    EIncrementor_Resource = 1,
    EIncrementor_ResourceAway = 2,
    EIncrementor_HeavyAir = 3,
    EIncrementor_Drone = 4,
    EIncrementor_Deer = 5,
    EIncrementor_DeerScan = 6,
    EIncrementor_DeerWords = 7,
    EIncrementor_DeerWordsAway = 8,
    EIncrementor_Diplo = 9,
    EIncrementor_DiploScan = 10,
    EIncrementor_DiploWords = 11,
    EIncrementor_DiploWordsAway = 12,
    EIncrementor_Flyby = 13,
    EIncrementor_Beast = 14,
    EIncrementor_Wingmen = 15,
    EIncrementor_Scouts = 16,
    EIncrementor_Fleet = 17,
    EIncrementor_Attackers = 18,
    EIncrementor_AttackersFromBehind = 19,
    EIncrementor_Flee = 20,
    EIncrementor_RemoveFleet = 21,
    EIncrementor_Fighters = 22,
    EIncrementor_PostFighters = 23,
    EIncrementor_Escape = 24,
    EIncrementor_Warp = 25,
};

class cGcCreatureSpawnEnum
{
    static const unsigned __int64 muNameHash = 0xF1142B73FBEC2939;
    static const unsigned __int64 muTemplateHash = 0xC4D3D498FA5EAF4B;
    static const int miNumMembers = 1;

    eIncrementor meIncrementor;

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
