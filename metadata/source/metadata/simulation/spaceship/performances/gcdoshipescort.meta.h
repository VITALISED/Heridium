#pragma once
#include "pch.h"

class cGcAISpaceshipRoles;
class cGcRealityCommonFactions;
class cGcAISpaceshipTypes;

class cGcDoShipEscort
{
public:
    static const unsigned __int64 muNameHash = 0x68C0F45A086C1EB;
    static const unsigned __int64 muTemplateHash = 0x122643798D35042D;
    static const int miNumMembers = 7;

    bool mbMatchRole;
    cGcAISpaceshipRoles mEscortTargetShipRole;
    bool mbMatchFaction;
    cGcRealityCommonFactions mEscortTargetShipFaction;
    bool mbMatchType;
    cGcAISpaceshipTypes mEscortTargetShipType;
    float mfMaxSearchDistance;

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
