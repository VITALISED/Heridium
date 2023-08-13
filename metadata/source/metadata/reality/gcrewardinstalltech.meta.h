#pragma once
#include "../../../../../../pch.h"

enum eInventoryToInstallIn
{
    EInventoryToInstallIn_Personal = 0,
    EInventoryToInstallIn_PersonalTech = 1,
    EInventoryToInstallIn_Ship = 2,
    EInventoryToInstallIn_ShipTech = 3,
    EInventoryToInstallIn_Freighter = 4,
    EInventoryToInstallIn_Vehicle = 5,
    EInventoryToInstallIn_Weapon = 6,
};

class cGcRewardInstallTech
{
    static const unsigned __int64 muNameHash = 0x75DF796697F3DB0A;
    static const unsigned __int64 muTemplateHash = 0x21F8F59124D39327;
    static const int miNumMembers = 4;

    TkID<128> mTechId;
    eInventoryToInstallIn meInventoryToInstallIn;
    bool mbSilent;
    bool mbInstallBroken;

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
