#pragma once
#include "../../../../../../../pch.h"

enum ePersistentBaseTypes
{
    EPersistentBaseTypes_HomePlanetBase = 0,
    EPersistentBaseTypes_FreighterBase = 1,
    EPersistentBaseTypes_ExternalPlanetBase = 2,
    EPersistentBaseTypes_CivilianFreighterBase = 3,
    EPersistentBaseTypes_FriendsPlanetBase = 4,
    EPersistentBaseTypes_FriendsFreighterBase = 5,
    EPersistentBaseTypes_SpaceBase = 6,
    EPersistentBaseTypes_GeneratedPlanetBase = 7,
    EPersistentBaseTypes_GeneratedPlanetBaseEdits = 8,
};

class cGcPersistentBaseTypes
{
    static const unsigned __int64 muNameHash = 0x1E20A14918514C43;
    static const unsigned __int64 muTemplateHash = 0xDC40A2A2CA47998D;
    static const int miNumMembers = 1;

    ePersistentBaseTypes mePersistentBaseTypes;

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
