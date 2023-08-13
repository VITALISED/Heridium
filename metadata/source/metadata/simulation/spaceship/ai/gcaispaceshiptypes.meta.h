#pragma once

#include "../../../../../../../../pch.h"
enum eShipType
{
    EShipType_None = 0,
    EShipType_Pirate = 1,
    EShipType_Police = 2,
    EShipType_Trader = 3,
    EShipType_Freighter = 4,
    EShipType_PlayerSquadron = 5,
    EShipType_DefenceForce = 6,
};

class cGcAISpaceshipTypes
{
    static const unsigned __int64 muNameHash = 10141985388659641864;
    static const unsigned __int64 muTemplateHash = 16148747964327930980;
    static const int miNumMembers = 1;

    eShipType meShipType;

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