#pragma once
#include "pch.h"

enum ePetChatType
{
    EPetChatType_Adopted = 0,
    EPetChatType_Hatched = 1,
    EPetChatType_Summoned = 2,
    EPetChatType_Greeting = 3,
    EPetChatType_Hazard = 4,
    EPetChatType_Scanning = 5,
    EPetChatType_PositiveEmote = 6,
    EPetChatType_HungryEmote = 7,
    EPetChatType_LonelyEmote = 8,
    EPetChatType_Go_There = 9,
    EPetChatType_Come_Here = 10,
    EPetChatType_Planet = 11,
    EPetChatType_Mine = 12,
    EPetChatType_Attack = 13,
    EPetChatType_Chase = 14,
    EPetChatType_ReceivedTreat = 15,
    EPetChatType_Tickled = 16,
    EPetChatType_Ride = 17,
    EPetChatType_Egg_Laid = 18,
    EPetChatType_Customise = 19,
    EPetChatType_Unsummoned = 20,
};

class cGcPetChatType
{
public:
    static const unsigned __int64 muNameHash = 0x51175DF2E4A2F863;
    static const unsigned __int64 muTemplateHash = 0x12CAC40DB6314D79;
    static const int miNumMembers = 1;

    ePetChatType mePetChatType;

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
