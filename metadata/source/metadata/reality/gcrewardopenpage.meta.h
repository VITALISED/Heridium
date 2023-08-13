#pragma once
#include "../../../../../../pch.h"

enum ePageToOpen
{
    EPageToOpen_FreighterShipTransfer = 0,
    EPageToOpen_DisplayPortalUa = 1,
    EPageToOpen_ExpeditionSelect = 2,
    EPageToOpen_TraderInventory = 3,
    EPageToOpen_ExpeditionDetails = 4,
    EPageToOpen_ExpeditionDebrief = 5,
    EPageToOpen_BuildingPartsShop = 6,
    EPageToOpen_ExocraftShop = 7,
    EPageToOpen_NexusTechShop = 8,
    EPageToOpen_ScrapDealerShop = 9,
    EPageToOpen_BuyShip = 10,
    EPageToOpen_SettlementManagement = 11,
    EPageToOpen_SquadronManagement = 12,
    EPageToOpen_SquadronRecruitment = 13,
    EPageToOpen_FleetManagement = 14,
};

class cGcRewardOpenPage
{
    static const unsigned __int64 muNameHash = 0xF1F483BCEFC0AD13;
    static const unsigned __int64 muTemplateHash = 0xFF551FA54C6FC97E;
    static const int miNumMembers = 2;

    ePageToOpen mePageToOpen;
    bool mbReinteractWhenComplete;

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
