#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/graphics/hud/gcscannericon.meta.h"
#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcScannerIcons
{
public:
    static const unsigned __int64 muNameHash = 0x392CEA8FE98D0F4;
    static const unsigned __int64 muTemplateHash = 0x136B9B1D27C723B6;
    static const int miNumMembers = 82;

    cGcScannerIcon mTaggedBuilding;
    cGcScannerIcon mShip;
    cGcScannerIcon mVehicle;
    cGcScannerIcon mFreighter;
    cGcScannerIcon mFreighterBase;
    cGcScannerIcon mPlayerFreighter;
    cGcScannerIcon mDamagedFrigate;
    cGcScannerIcon mPurchasableFrigate;
    cGcScannerIcon mExpedition;
    cGcScannerIcon mPlayerBase;
    cGcScannerIcon mEditingBase;
    cGcScannerIcon mDeath;
    cGcScannerIcon mBounty1;
    cGcScannerIcon mBounty2;
    cGcScannerIcon mBounty3;
    cGcScannerIcon mBattle;
    cGcScannerIcon mShipSmall;
    cGcScannerIcon mDeathSmall;
    cGcScannerIcon mBountySmall;
    cGcScannerIcon mBattleSmall;
    cGcScannerIcon mTimedEvent;
    cGcScannerIcon mCheckpoint;
    cGcScannerIcon mGarage;
    cGcScannerIcon mNPC;
    cGcScannerIcon mSettlementNPC;
    cGcScannerIcon mCircleAnimation;
    cGcScannerIcon mHexAnimation;
    cGcScannerIcon mDiamondAnimation;
    cGcScannerIcon mArrowSmall;
    cGcScannerIcon mArrowLarge;
    cTkFixedArray<cGcScannerIcon, 6> maGenericIcons;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIcons;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIconsBinocs;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIconsHuge;
    cTkFixedArray<cGcScannerIcon, 54> maScannableIcons;
    cTkFixedArray<cGcScannerIcon, 54> maScannableIconsBinocs;
    cTkFixedArray<cTkColour, 54> maScannableColours;
    cTkColour mBuildingColour;
    cTkColour mGenericColour;
    cTkColour mRelicColour;
    cTkColour mSignalColour;
    cTkColour mUnknownColour;
    cGcScannerIcon mCreatureDiscovered;
    cGcScannerIcon mCreatureUndiscovered;
    cGcScannerIcon mCreatureUnknown;
    cGcScannerIcon mMessageBeacon;
    cGcScannerIcon mMessageBeaconSmall;
    cGcScannerIcon mBaseBuildingMarker;
    cGcScannerIcon mPlanetPoleNorth;
    cGcScannerIcon mPlanetPoleSouth;
    cGcScannerIcon mMonumentMarker;
    cGcScannerIcon mNetworkPlayerMarker;
    cGcScannerIcon mNetworkPlayerMarkerShip;
    cGcScannerIcon mNetworkPlayerMarkerVehicle;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkFSPlayerMarkers;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkFSPlayerMarkersShip;
    cTkFixedArray<cTkColour, 4> maNetworkFSPlayerColours;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkPlayerFreighter;
    cGcScannerIcon mPortalMarker;
    cGcScannerIcon mBlackHole;
    cGcScannerIcon mCreatureCurious;
    cGcScannerIcon mCreatureAction;
    cGcScannerIcon mCreatureTame;
    cGcScannerIcon mCreatureDanger;
    cGcScannerIcon mCreatureFiend;
    cGcScannerIcon mCreatureMilk;
    cTkFixedArray<cTkTextureResource, 5> maHighlightIcons;
    cGcScannerIcon mMissionEnterOrbit;
    cGcScannerIcon mMissionEnterBuilding;
    cGcScannerIcon mMissionEnterStation;
    cGcScannerIcon mMissionEnterFreighter;
    cGcScannerIcon mMissionAbandonedFreighter;
    cGcScannerIcon mCreatureInteraction;
    cGcScannerIcon mPetInteraction;
    cGcScannerIcon mPet;
    cGcScannerIcon mPetSad;
    cGcScannerIcon mPetActivity;
    cGcScannerIcon mPlayerSettlement;
    cGcScannerIcon mOtherPlayerSettlement;
    cGcScannerIcon mFriendlyDrone;
    cGcScannerIcon mPirateRaid;
    cGcScannerIcon mFuelAsteroid;

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
