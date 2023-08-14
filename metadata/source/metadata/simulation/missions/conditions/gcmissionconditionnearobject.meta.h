#pragma once
#include "../../../../../../pch.h"

enum eMissionObject
{
    EMissionObject_PlayerShip = 0,
    EMissionObject_PlayerVehicle = 1,
    EMissionObject_StoryPortal = 2,
    EMissionObject_OpenStandardPortal = 3,
};

class cGcMissionConditionNearObject
{
public:
    static const unsigned __int64 muNameHash = 0x748605335FA1C427;
    static const unsigned __int64 muTemplateHash = 0x98A8088CCBCB2360;
    static const int miNumMembers = 2;

    eMissionObject meMissionObject;
    float mfDistance;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
