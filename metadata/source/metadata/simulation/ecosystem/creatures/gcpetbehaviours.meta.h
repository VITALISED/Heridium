#pragma once
#include "../../../../../../pch.h"

enum ePetBehaviour
{
    EPetBehaviour_None = 0,
    EPetBehaviour_Idle = 1,
    EPetBehaviour_Eat = 2,
    EPetBehaviour_Poop = 3,
    EPetBehaviour_LayEgg = 4,
    EPetBehaviour_FollowPlayer = 5,
    EPetBehaviour_AdoptedFollowPlayer = 6,
    EPetBehaviour_ScanForResource = 7,
    EPetBehaviour_FindResource = 8,
    EPetBehaviour_FindHazards = 9,
    EPetBehaviour_AttackHazard = 10,
    EPetBehaviour_FindBuilding = 11,
    EPetBehaviour_Fetch = 12,
    EPetBehaviour_Explore = 13,
    EPetBehaviour_Emote = 14,
    EPetBehaviour_GestureReact = 15,
    EPetBehaviour_OrderedToPos = 16,
    EPetBehaviour_ComeHere = 17,
    EPetBehaviour_Mine = 18,
    EPetBehaviour_Summoned = 19,
    EPetBehaviour_Adopted = 20,
    EPetBehaviour_Hatched = 21,
    EPetBehaviour_PostInteract = 22,
    EPetBehaviour_Rest = 23,
    EPetBehaviour_Attack = 24,
    EPetBehaviour_Watch = 25,
    EPetBehaviour_Greet = 26,
    EPetBehaviour_TeleportToPlayer = 27,
};

class cGcPetBehaviours
{
public:
    static const unsigned __int64 muNameHash = 0x82204A5605D64063;
    static const unsigned __int64 muTemplateHash = 0xD8AD71C286DECFF3;
    static const int miNumMembers = 1;

    ePetBehaviour mePetBehaviour;

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
