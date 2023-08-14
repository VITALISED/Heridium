#pragma once
#include "../../../../pch.h"

enum eSeasonSaveStateOnDeath
{
    ESeasonSaveStateOnDeath_Standard = 0,
    ESeasonSaveStateOnDeath_ResetAndQuit = 1,
    ESeasonSaveStateOnDeath_ResetPosSaveAndQuit = 2,
    ESeasonSaveStateOnDeath_SaveAndQuit = 3,
};

class cGcSeasonSaveStateOnDeath
{
public:
    static const unsigned __int64 muNameHash = 0x800386833E2445B5;
    static const unsigned __int64 muTemplateHash = 0xBEF45E7C90B2A83C;
    static const int miNumMembers = 1;

    eSeasonSaveStateOnDeath meSeasonSaveStateOnDeath;

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
