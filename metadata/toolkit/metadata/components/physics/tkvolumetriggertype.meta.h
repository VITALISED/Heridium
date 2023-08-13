#pragma once
#include "../../../../../../../pch.h"

enum eVolumeTriggerType
{
    EVolumeTriggerType_Open = 0,
    EVolumeTriggerType_GenericInterior = 1,
    EVolumeTriggerType_GenericGlassInterior = 2,
    EVolumeTriggerType_Corridor = 3,
    EVolumeTriggerType_SmallRoom = 4,
    EVolumeTriggerType_LargeRoom = 5,
    EVolumeTriggerType_OpenCovered = 6,
    EVolumeTriggerType_HazardProtection = 7,
    EVolumeTriggerType_FieldBoundary = 8,
    EVolumeTriggerType_Custom_Biodome = 9,
    EVolumeTriggerType_Portal = 10,
    EVolumeTriggerType_VehicleBoost = 11,
    EVolumeTriggerType_NexusPlaza = 12,
    EVolumeTriggerType_NexusCommunityHub = 13,
    EVolumeTriggerType_NexusHangar = 14,
    EVolumeTriggerType_RaceObstacle = 15,
    EVolumeTriggerType_HazardProtectionCold = 16,
    EVolumeTriggerType_SpaceStorm = 17,
};

class cTkVolumeTriggerType
{
    static const unsigned __int64 muNameHash = 0xA4F2D5595864317D;
    static const unsigned __int64 muTemplateHash = 0x8AEBEF11092A0AA6;
    static const int miNumMembers = 1;

    eVolumeTriggerType meVolumeTriggerType;

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
