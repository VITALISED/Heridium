#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/gcdungeonroomparams.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcdungeonquestparams.meta.h"

class cGcDungeonGenerationParams
{
public:
    static const unsigned __int64 muNameHash = 0xFD9E29934900184E;
    static const unsigned __int64 muTemplateHash = 0xAA790A943816F13C;
    static const int miNumMembers = 16;

    unsigned int muiSizeX;
    unsigned int muiSizeY;
    unsigned int muiSizeZ;
    unsigned int muiEntranceX;
    unsigned int muiEntranceY;
    unsigned int muiEntranceZ;
    unsigned int muiRooms;
    float mfXProbability;
    float mfYProbability;
    float mfZProbability;
    float mfStraightMultiplier;
    cTkDynamicArray<cGcDungeonRoomParams> maMainRoomTypes;
    cTkDynamicArray<TkID<128> > maBranchRoomTypes;
    cTkDynamicArray<cGcDungeonQuestParams> maQuests;
    cTkDynamicArray<cTkClassPointer> maGenerationRules;
    cTkDynamicArray<TkID<128> > maPruningRules;

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
