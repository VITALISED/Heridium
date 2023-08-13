#pragma once

#include "../../../../../../pch.h"
class cGcDungeonGenerationParams
{
    static const unsigned __int64 muNameHash = 18275090050477725774;
    static const unsigned __int64 muTemplateHash = 12283861090342203708;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};