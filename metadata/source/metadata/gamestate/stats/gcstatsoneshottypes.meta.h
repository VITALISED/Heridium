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
    static const unsigned __int64 muNameHash = 0x32707F0D00335D4F;
    static const unsigned __int64 muTemplateHash = 0x26885B9B57AC27F0;
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
