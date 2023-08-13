#pragma once
#include "pch.h"

enum eActiveModeOnFoot
{
    EActiveModeOnFoot_None = 0,
    EActiveModeOnFoot_ScopeOnly = 1,
    EActiveModeOnFoot_ScopeOrFiring = 2,
    EActiveModeOnFoot_Always = 3,
};

enum eActiveModeWhenBuilding
{
    EActiveModeWhenBuilding_None = 0,
    EActiveModeWhenBuilding_BuildPlacementOnly = 1,
    EActiveModeWhenBuilding_SelectionModeOnly = 2,
    EActiveModeWhenBuilding_Always = 3,
};

enum eEnableGyroInBuildingFreeCam
{
    EEnableGyroInBuildingFreeCam_Never = 0,
    EEnableGyroInBuildingFreeCam_MatchActiveModeWhenBuilding = 1,
    EEnableGyroInBuildingFreeCam_Always = 2,
};

enum eActiveModeInExocraft
{
    EActiveModeInExocraft_None = 0,
    EActiveModeInExocraft_Firing = 1,
    EActiveModeInExocraft_Always = 2,
};

enum eLookStickEnabled
{
    ELookStickEnabled_None = 0,
    ELookStickEnabled_Disabled = 1,
    ELookStickEnabled_Enabled = 2,
};

enum eCursorLookStickEnabled
{
    ECursorLookStickEnabled_None = 0,
    ECursorLookStickEnabled_Disabled = 1,
};

enum eHandedness
{
    EHandedness_Left = 0,
    EHandedness_Right = 1,
};

enum eGyroRotationSpace
{
    EGyroRotationSpace_Local = 0,
    EGyroRotationSpace_Player = 1,
};

enum eGyroRotationSpaceHandheld
{
    EGyroRotationSpaceHandheld_Local = 0,
    EGyroRotationSpaceHandheld_Player = 1,
};

enum eYawAxisDirection
{
    EYawAxisDirection_Disabled = 0,
    EYawAxisDirection_Standard = 1,
    EYawAxisDirection_Inverted = 2,
};

enum eRollAxisDirection
{
    ERollAxisDirection_Disabled = 0,
    ERollAxisDirection_Standard = 1,
    ERollAxisDirection_Inverted = 2,
};

enum ePitchAxisDirection
{
    EPitchAxisDirection_Disabled = 0,
    EPitchAxisDirection_Standard = 1,
    EPitchAxisDirection_Inverted = 2,
};

class cGcGyroSettingsData
{
public:
    static const unsigned __int64 muNameHash = 0x4EA99277E076565E;
    static const unsigned __int64 muTemplateHash = 0xDC3376240A715E64;
    static const int miNumMembers = 34;

    bool mbGyroEnabled;
    bool mbGyroEnabledHandheld;
    eActiveModeOnFoot meActiveModeOnFoot;
    bool mbAllowWhenRidingCreatures;
    eActiveModeWhenBuilding meActiveModeWhenBuilding;
    eEnableGyroInBuildingFreeCam meEnableGyroInBuildingFreeCam;
    eActiveModeInExocraft meActiveModeInExocraft;
    eLookStickEnabled meLookStickEnabled;
    bool mbGyroCursorEnabled;
    float mfCursorSensitivityX;
    float mfCursorSensitivityY;
    float mfCursorTighteningThreshold;
    eCursorLookStickEnabled meCursorLookStickEnabled;
    eHandedness meHandedness;
    float mfSensitivityX;
    float mfSensitivityY;
    float mfSteadying;
    float mfAcceleration;
    bool mbEnableAdvancedOptions;
    float mfScopeMultiplier;
    float mfAimingMultiplier;
    float mfExocraftMultiplier;
    float mfBuildingMultiplier;
    bool mbZoomScalesSensitivity;
    eGyroRotationSpace meGyroRotationSpace;
    eGyroRotationSpaceHandheld meGyroRotationSpaceHandheld;
    eYawAxisDirection meYawAxisDirection;
    eRollAxisDirection meRollAxisDirection;
    ePitchAxisDirection mePitchAxisDirection;
    float mfSmoothingThreshold;
    float mfSmoothingWindow;
    float mfTighteningThreshold;
    float mfDeadzone;
    bool mbFilterControllerVibrations;

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
