#pragma once

#include "../../../../../../../../../pch.h"
enum eRequirePlayerAction
{
    ERequirePlayerAction_None = 0,
    ERequirePlayerAction_Fire = 1,
    ERequirePlayerAction_InShip = 2,
    ERequirePlayerAction_OnFoot = 3,
    ERequirePlayerAction_OnFootOutside = 4,
    ERequirePlayerAction_Upload = 5,
};

enum eDistanceCheckType
{
    EDistanceCheckType_Radius = 0,
    EDistanceCheckType_BoundingBox = 1,
};

class cGcPlayerNearbyEvent
{
    static const unsigned __int64 muNameHash = 9983773420124105180;
    static const unsigned __int64 muTemplateHash = 4224451224272963731;
    static const int miNumMembers = 13;

    eRequirePlayerAction meRequirePlayerAction;
    float mfDistance;
    float mfAngle;
    bool mbAnglePlayerRelative;
    float mfAngleOffset;
    bool mbAngleReflected;
    float mfAngleMinDistance;
    eDistanceCheckType meDistanceCheckType;
    bool mbInverse;
    bool mbOnlyForLocalPlayer;
    bool mbIncludeAllPhysics;
    bool mbIncludeMobileNPCs;
    bool mbTeleporterCountsAsPlayer;

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
