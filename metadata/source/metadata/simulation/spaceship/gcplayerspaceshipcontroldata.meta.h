#pragma once

#include "../../../../../../../pch.h"
class cGcPlayerSpaceshipEngineData;
class cGcPlayerSpaceshipEngineData;
class cGcPlayerSpaceshipEngineData;
class cGcPlayerSpaceshipEngineData;
class cTkCurveType;
class cTkCurveType;

class cGcPlayerSpaceshipControlData
{
    static const unsigned __int64 muNameHash = 5311704159900097087;
    static const unsigned __int64 muTemplateHash = 10819468709782625760;
    static const int miNumMembers = 23;

    cGcPlayerSpaceshipEngineData mSpaceEngine;
    cGcPlayerSpaceshipEngineData mPlanetEngine;
    cGcPlayerSpaceshipEngineData mCombatEngine;
    cGcPlayerSpaceshipEngineData mAtmosCombatEngine;
    float mfExitHeightFactorMin;
    float mfExitHeightFactorMax;
    float mfExitHeightFactorPlungeMin;
    float mfExitHeightFactorPlungeMax;
    float mfExitAngleMin;
    float mfExitAngleMax;
    float mfExitLeaveAngle;
    cTkCurveType mExitCurve;
    cTkCurveType mExitDownCurve;
    float mfAngularFactor;
    float mfMaxTorque;
    float mfShipPlanetBrakeMinSpeed;
    float mfShipPlanetBrakeMaxSpeed;
    float mfShipPlanetBrakeMinHeight;
    float mfShipPlanetBrakeMaxHeight;
    float mfShipPlanetBrakeForce;
    float mfShipPlanetBrakeAlignMinTime;
    float mfShipPlanetBrakeAlignMaxTime;
    float mfShipMinHeightForce;

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
