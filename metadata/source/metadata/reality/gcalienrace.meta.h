#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 11122410210106744078;
    static const unsigned __int64 muTemplateHash = 9707899122124898615;
    static const int miNumMembers = 1;

    eAlienRace meAlienRace;

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