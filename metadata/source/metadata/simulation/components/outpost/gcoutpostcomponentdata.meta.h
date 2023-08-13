#pragma once
#include "pch.h"

class cGcOutpostComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x184558FBF0A370E2;
    static const unsigned __int64 muTemplateHash = 0xEB9332FF5C26A774;
    static const int miNumMembers = 29;

    bool mbAnomaly;
    bool mbFrigate;
    bool mbSpaceStation;
    bool mbNexusExterior;
    bool mbNexusInterior;
    bool mbAIDestination;
    bool mbHasDoors;
    bool mbHasOwnGravity;
    TkID<128> mDoor;
    bool mbCheckLandingAreaClear;
    float mfCircleRadius;
    float mfApproachRange;
    float mfApproachAngle;
    float mfApproachSpeed;
    float mfPlayerAutoLandRange;
    float mfLandingSpeed;
    float mfLandingHeight;
    bool mbRotateToDock;
    float mfTakeOffHeight;
    float mfTakeOffFwdDist;
    float mfTakeOffTime;
    float mfTakeOffAlignTime;
    float mfTakeOffSpeed;
    float mfTakeOffBoost;
    float mfTakeOffExtraAIHeight;
    float mfPostTakeOffExtraPlayerHeight;
    float mfPostTakeOffExtraPlayerSpeed;
    float mfTakeOffProgressForExtraHeight;
    cTkDynamicArray<cGcOutpostLSystemPair1> maLSystems;

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
