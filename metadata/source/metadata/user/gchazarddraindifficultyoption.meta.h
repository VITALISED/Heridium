#pragma once
#include "../../../../pch.h"

enum eHazardDrainDifficulty
{
    EHazardDrainDifficulty_Slow = 0,
    EHazardDrainDifficulty_Normal = 1,
    EHazardDrainDifficulty_Fast = 2,
};

class cGcHazardDrainDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x56BC170774FBDFB4;
    static const unsigned __int64 muTemplateHash = 0x4263632D17FDFC6D;
    static const int miNumMembers = 1;

    eHazardDrainDifficulty meHazardDrainDifficulty;

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
