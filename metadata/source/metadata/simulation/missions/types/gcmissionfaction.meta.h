#pragma once
#include "pch.h"

enum eMissionFaction
{
    EMissionFaction_Gek = 0,
    EMissionFaction_Korvax = 1,
    EMissionFaction_Vykeen = 2,
    EMissionFaction_TradeGuild = 3,
    EMissionFaction_WarriorGuild = 4,
    EMissionFaction_ExplorerGuild = 5,
    EMissionFaction_Nexus = 6,
    EMissionFaction_Pirates = 7,
    EMissionFaction_None = 8,
};

class cGcMissionFaction
{
public:
    static const unsigned __int64 muNameHash = 0x1D300E2AA74F7BA7;
    static const unsigned __int64 muTemplateHash = 0x5721A97130AFD54E;
    static const int miNumMembers = 1;

    eMissionFaction meMissionFaction;

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
