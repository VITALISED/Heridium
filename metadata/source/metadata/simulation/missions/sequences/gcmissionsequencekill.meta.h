#pragma once
#include "../../../../../../pch.h"

enum eKillTarget
{
    EKillTarget_Robots = 0,
    EKillTarget_Drones = 1,
    EKillTarget_Quads = 2,
    EKillTarget_Walkers = 3,
    EKillTarget_Predators = 4,
    EKillTarget_Creatures = 5,
    EKillTarget_Pirates = 6,
    EKillTarget_Traders = 7,
    EKillTarget_Fiends = 8,
    EKillTarget_HazardousFlora = 9,
    EKillTarget_Worms = 10,
};

class cGcMissionSequenceKill
{
public:
    static const unsigned __int64 muNameHash = 0xF2F929BD28DDCD6B;
    static const unsigned __int64 muTemplateHash = 0x79A38FA0B68F95E0;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macMessage;
    eKillTarget meKillTarget;
    int miAmountMin;
    int miAmountMax;
    cTkFixedString<128,char> macDebugText;

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
