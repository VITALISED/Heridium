#pragma once
#include "../../../../../../pch.h"

enum eActionSetType
{
    EActionSetType_None = 0,
    EActionSetType_FRONTEND = 1,
    EActionSetType_OnFootControls = 2,
    EActionSetType_OnFootQuickMenu = 3,
    EActionSetType_ShipControls = 4,
    EActionSetType_ShipQuickMenu = 5,
    EActionSetType_VehicleMode = 6,
    EActionSetType_GalacticMap = 7,
    EActionSetType_PhotoModeMenu = 8,
    EActionSetType_PhotoModeMvCam = 9,
    EActionSetType_AmbientMode = 10,
    EActionSetType_DebugMode = 11,
    EActionSetType_BuildMenuAnalogueRotate = 12,
    EActionSetType_TextChat = 13,
    EActionSetType_BuildMenuSelectionMode = 14,
    EActionSetType_BuildMenuPlacementMode = 15,
};

class cGcActionSetType
{
    static const unsigned __int64 muNameHash = 0x99FB64404DAF2DE7;
    static const unsigned __int64 muTemplateHash = 0x6B1AA41A13BF3652;
    static const int miNumMembers = 1;

    eActionSetType meActionSetType;

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
