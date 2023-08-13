#pragma once
#include "../../../../../../pch.h"

enum eAIFaction
{
    EAIFaction_Player = 0,
    EAIFaction_Civilian = 1,
    EAIFaction_Pirate = 2,
    EAIFaction_Police = 3,
    EAIFaction_Creature = 4,
};

class cGcRealityCommonFactions
{
    static const unsigned __int64 muNameHash = 0xA57475D6E3E6E9A5;
    static const unsigned __int64 muTemplateHash = 0xF861B887610499B7;
    static const int miNumMembers = 1;

    eAIFaction meAIFaction;

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
