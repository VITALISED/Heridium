#pragma once
#include "../../../../../../pch.h"

class cGcBlockListPersistence;

enum ePS4FixedFPS
{
    EPS4FixedFPS_Invalid = 0,
    EPS4FixedFPS_False = 1,
    EPS4FixedFPS_True = 2,
};

enum eBaseSharingMode
{
    EBaseSharingMode_Undecided = 0,
    EBaseSharingMode_On = 1,
    EBaseSharingMode_Off = 2,
};

enum eTemperatureUnit
{
    ETemperatureUnit_Invalid = 0,
    ETemperatureUnit_C = 1,
    ETemperatureUnit_F = 2,
    ETemperatureUnit_K = 3,
};

enum eMovementMode
{
    EMovementMode_Teleporter = 0,
    EMovementMode_Smooth = 1,
};
class cGcMovementDirection;
class cGcMovementDirection;

enum eTurnMode
{
    ETurnMode_Smooth = 0,
    ETurnMode_Snap = 1,
};

enum eUIColourScheme
{
    EUIColourScheme_Default = 0,
    EUIColourScheme_Protanopia = 1,
    EUIColourScheme_Deuteranopia = 2,
    EUIColourScheme_Tritanopia = 3,
};

enum eSpaceCombatFollowMode
{
    ESpaceCombatFollowMode_Disabled = 0,
    ESpaceCombatFollowMode_Hold = 1,
    ESpaceCombatFollowMode_Toggle = 2,
};

enum exEyeTrackingFlags
{
    EEyeTrackingFlags_BaseBuilding = 1,
    EEyeTrackingFlags_WristMenus = 2,
    EEyeTrackingFlags_LookVector = 4,
    EEyeTrackingFlags_BinocScanner = 8,
};
class cGcGyroSettingsData;
class cTkLanguages;
class cGcHand;

enum eHighResVRUI
{
    EHighResVRUI_High = 0,
    EHighResVRUI_Low = 1,
};
class cGcInWorldUIScreenData;
class cGcInWorldUIScreenData;
class cGcInWorldUIScreenData;
class cGcInWorldUIScreenData;

class cGcUserSettingsData
{
    static const unsigned __int64 muNameHash = 0x3A50D683FD1CF4BF;
    static const unsigned __int64 muTemplateHash = 0xB1245EFE662ED9AE;
    static const int miNumMembers = 91;

    bool mbInvertLookControls;
    bool mbInvertFlightControls;
    bool mbInvertVRInWorldFlightControls;
    bool mbVRVehiclesUseWorldControls;
    bool mbHUDHidden;
    bool mbVibration;
    int miScreenBrightness;
    int miMusicVolume;
    int miSfxVolume;
    int miLookSensitivityMode1;
    int miLookSensitivityMode2;
    int miFlightSensitivityMode1;
    int miFlightSensitivityMode2;
    int miCursorSensitivityMode1;
    int miCursorSensitivityMode2;
    int miMouseSpringSmoothing;
    cGcBlockListPersistence mBlockList;
    int miMotionBlurAmount;
    int miFilter;
    bool mbDamageNumbers;
    ePS4FixedFPS mePS4FixedFPS;
    float mfPS4FOVFoot;
    float mfPS4FOVShip;
    bool mbXboxOneXHighResolutionMode;
    bool mbPS4VignetteAndScanlines;
    eBaseSharingMode meBaseSharingMode;
    cTkDynamicArray<TkID<128> > maSeenSubstances;
    cTkDynamicArray<TkID<128> > maSeenTechnologies;
    cTkDynamicArray<TkID<128> > maSeenProducts;
    cTkDynamicArray<TkID<256> > maSeenWikiTopics;
    cTkDynamicArray<TkID<256> > maUnlockedWikiTopics;
    cTkDynamicArray<TkID<128> > maUnlockedTitles;
    cTkDynamicArray<TkID<128> > maUnlockedSpecials;
    cTkDynamicArray<TkID<128> > maUnlockedSeasonRewards;
    cTkDynamicArray<TkID<128> > maUnlockedTwitchRewards;
    cTkDynamicArray<TkID<128> > maUnlockedPlatformRewards;
    bool mbVoiceChat;
    bool mbMultiplayer;
    bool mbInstantUIInputs;
    bool mbInstantUIDelete;
    bool mbSpeechToText;
    bool mbTranslate;
    bool mbCrossPlatform;
    eTemperatureUnit meTemperatureUnit;
    bool mbUseOldMouseFlight;
    int miLastSeenCommunityMission;
    int miLastSeenCommunityMissionTier;
    eMovementMode meMovementMode;
    cGcMovementDirection mMovementDirectionPad;
    cGcMovementDirection mMovementDirectionHands;
    bool mbEnableControllerCursorInVR;
    eTurnMode meTurnMode;
    float mfVRVignetteStrength;
    bool mbUseShipAutoControlVignette;
    float mfHUDZoom;
    float mfFrontendZoom;
    bool mbUseAutoTorch;
    eUIColourScheme meUIColourScheme;
    bool mbEnableModdingConsole;
    bool mbHeadBob;
    bool mbVRHeadBob;
    bool mbVRShowBody;
    bool mbUseCharacterHeightForCamera;
    bool mbBaseComplexityLimitsEnabled;
    bool mbEnableLargeLobbies;
    int miFireteamSessionCount;
    int miHeadsetVibrationStrength;
    int miVibrationStrength;
    int miCamerShakeStrength;
    int miTriggerFeedbackStrength;
    eSpaceCombatFollowMode meSpaceCombatFollowMode;
    cTkDynamicArray<cTkFixedString<128,char> > maUpgradedUsers;
    bool mbAllowWhiteScreenTransitions;
    bool mbAccessibleText;
    bool mbAutoScanDiscoveries;
    bool mbSprintScanSwap;
    bool mbPlaceJumpSwap;
    exEyeTrackingFlags mexEyeTrackingFlags;
    cGcGyroSettingsData mGyroSettings;
    cTkLanguages mLanguage;
    bool mbAutoRotateThirdPersonPlayerCamera;
    cGcHand mDominantHand;
    float mfHazardEffectsStrength;
    bool mbQuickMenuBuildMenuSwap;
    eHighResVRUI meHighResVRUI;
    float mfPlayerHUDVROffset;
    float mfShipHUDVROffset;
    cGcInWorldUIScreenData mQuickMenuLauncherScreenData;
    cGcInWorldUIScreenData mVehicleWristMenuScreenData;
    cGcInWorldUIScreenData mWeaponMenuScreenData;
    cGcInWorldUIScreenData mLargeWeaponMenuScreenData;

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
