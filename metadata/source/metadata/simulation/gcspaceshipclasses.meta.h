#pragma once
#include "../../../../../../pch.h"

enum eShipClass
{
    EShipClass_Freighter = 0,
    EShipClass_Dropship = 1,
    EShipClass_Fighter = 2,
    EShipClass_Scientific = 3,
    EShipClass_Shuttle = 4,
    EShipClass_PlayerFreighter = 5,
    EShipClass_Royal = 6,
    EShipClass_Alien = 7,
    EShipClass_Sail = 8,
};

class cGcSpaceshipClasses
{
    static const unsigned __int64 muNameHash = 0xB9B04C0CA0357C57;
    static const unsigned __int64 muTemplateHash = 0xBCA7F95FF0E24D2D;
    static const int miNumMembers = 1;

    eShipClass meShipClass;

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
