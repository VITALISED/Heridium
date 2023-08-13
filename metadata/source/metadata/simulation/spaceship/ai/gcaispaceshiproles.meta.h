#pragma once
#include "pch.h"

enum eAIShipRole
{
    EAIShipRole_Standard = 0,
    EAIShipRole_PlayerSquadron = 1,
    EAIShipRole_Freighter = 2,
    EAIShipRole_CapitalFreighter = 3,
    EAIShipRole_SmallFreighter = 4,
    EAIShipRole_TinyFreighter = 5,
    EAIShipRole_Frigate = 6,
};

class cGcAISpaceshipRoles
{
public:
    static const unsigned __int64 muNameHash = 0x4533D19670B0A519;
    static const unsigned __int64 muTemplateHash = 0x18E65DC6E8DC9DAA;
    static const int miNumMembers = 1;

    eAIShipRole meAIShipRole;

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
