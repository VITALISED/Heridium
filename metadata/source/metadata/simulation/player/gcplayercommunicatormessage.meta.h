#pragma once

#include "../../../../../../../pch.h"
enum eCommunicatorType
{
    ECommunicatorType_HoloExplorer = 0,
    ECommunicatorType_HoloSceptic = 1,
    ECommunicatorType_HoloNoone = 2,
    ECommunicatorType_Generic = 3,
    ECommunicatorType_PlayerFreighterCaptain = 4,
    ECommunicatorType_Polo = 5,
    ECommunicatorType_Nada = 6,
    ECommunicatorType_QuicksilverBot = 7,
    ECommunicatorType_PlayerSettlementResident = 8,
    ECommunicatorType_CargoScanDrone = 9,
    ECommunicatorType_Tethys = 10,
};
class cGcAlienRace;

class cGcPlayerCommunicatorMessage
{
    static const unsigned __int64 muNameHash = 17886384828045606682;
    static const unsigned __int64 muTemplateHash = 1834313519015244678;
    static const int miNumMembers = 5;

    TkID<256> mDialog;
    bool mbShowHologram;
    eCommunicatorType meCommunicatorType;
    cGcAlienRace mRaceOverride;
    TkID<256> mShipHUDOverride;

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
