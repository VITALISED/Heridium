#pragma once

#include "../../../../../../../pch.h"
enum eStatsOneShot
{
    EStatsOneShot_ShipLanded = 0,
    EStatsOneShot_ShipLaunched = 1,
    EStatsOneShot_ShipWarped = 2,
    EStatsOneShot_WeaponFired = 3,
};

class cGcStatsOneShotTypes
{
    static const unsigned __int64 muNameHash = 3634544593102658895;
    static const unsigned __int64 muTemplateHash = 2776569893022869488;
    static const int miNumMembers = 1;

    eStatsOneShot meStatsOneShot;

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
