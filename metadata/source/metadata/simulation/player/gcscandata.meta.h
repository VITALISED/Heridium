#pragma once

#include "../../../../../../../pch.h"
enum eScanType
{
    EScanType_Tool = 0,
    EScanType_Beacon = 1,
    EScanType_RadioTower = 2,
    EScanType_Observatory = 3,
    EScanType_DistressSignal = 4,
    EScanType_Waypoint = 5,
    EScanType_Ship = 6,
    EScanType_DebugPlanet = 7,
    EScanType_DebugSpace = 8,
    EScanType_VisualOnly = 9,
    EScanType_VisualOnlyAerial = 10,
};

class cGcScanData
{
    static const unsigned __int64 muNameHash = 9597648036970694961;
    static const unsigned __int64 muTemplateHash = 1212621708321567521;
    static const int miNumMembers = 5;

    eScanType meScanType;
    float mfPulseRange;
    float mfPulseTime;
    bool mbPlayAudioOnMarkers;
    float mfChargeTime;

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
