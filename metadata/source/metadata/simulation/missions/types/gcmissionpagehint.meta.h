#pragma once
#include "../../../../../../../../pch.h"

enum eMissionPageHint
{
    EMissionPageHint_None = 0,
    EMissionPageHint_Suit = 1,
    EMissionPageHint_Ship = 2,
    EMissionPageHint_Weapon = 3,
    EMissionPageHint_Vehicle = 4,
    EMissionPageHint_Freighter = 5,
    EMissionPageHint_Wiki = 6,
    EMissionPageHint_Catalogue = 7,
    EMissionPageHint_MissionLog = 8,
    EMissionPageHint_Discovery = 9,
    EMissionPageHint_Journey = 10,
    EMissionPageHint_Expedition = 11,
};

class cGcMissionPageHint
{
    static const unsigned __int64 muNameHash = 0xBC45706D394C0853;
    static const unsigned __int64 muTemplateHash = 0xC0BFCC224C77B187;
    static const int miNumMembers = 1;

    eMissionPageHint meMissionPageHint;

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
