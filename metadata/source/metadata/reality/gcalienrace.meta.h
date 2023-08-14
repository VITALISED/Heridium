#pragma once
#include "../../../../pch.h"

enum eAlienRace
{
    EAlienRace_Traders = 0,
    EAlienRace_Warriors = 1,
    EAlienRace_Explorers = 2,
    EAlienRace_Robots = 3,
    EAlienRace_Atlas = 4,
    EAlienRace_Diplomats = 5,
    EAlienRace_Exotics = 6,
    EAlienRace_None = 7,
};

class cGcAlienRace
{
public:
    static const unsigned __int64 muNameHash = 0x9A5ABD2833971D0E;
    static const unsigned __int64 muTemplateHash = 0x86B962D12194C137;
    static const int miNumMembers = 1;

    eAlienRace meAlienRace;

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
