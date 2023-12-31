#pragma once
#include "../../../../../../pch.h"

enum eInteractionAction
{
    EInteractionAction_PressButton = 0,
    EInteractionAction_HoldButton = 1,
    EInteractionAction_Shoot = 2,
};
#include "../../../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiontype.meta.h"
#include "../../../../../../metadata/toolkit/metadata/tkmodelrendererdata.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../../../metadata/source/metadata/gameplay/gcinteractionactivationcost.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiondof.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcalienpuzzlemissionoverride.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcstoryutilityoverride.meta.h"

enum eOverrideInteriorExteriorMarker
{
    EOverrideInteriorExteriorMarker_No = 0,
    EOverrideInteriorExteriorMarker_Interior = 1,
    EOverrideInteriorExteriorMarker_Exterior = 2,
};

class cGcInteractionComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xDAB0554EA36957B5;
    static const unsigned __int64 muTemplateHash = 0x345DED12B36153C4;
    static const int miNumMembers = 38;

    eInteractionAction meInteractionAction;
    cGcInteractionType mInteractionType;
    bool mbUseIntermediateUI;
    cTkModelRendererData mRenderer;
    cTkModelRendererData mRendererAlt;
    cGcAlienRace mRace;
    float mfAttractDistanceSq;
    bool mbSecondaryMeshAlwaysVisible;
    bool mbRepeatInteraction;
    bool mbUseInteractCamera;
    float mfBlendToCameraTime;
    float mfBlendFromCameraTime;
    cGcInteractionActivationCost mActivationCost;
    TkID<128> mTriggerAction;
    TkID<128> mTriggerActionOnPrepare;
    bool mbBroadcastTriggerAction;
    float mfInteractAngle;
    float mfInteractDistance;
    bool mbInteractInvertFace;
    cGcInteractionType mSecondaryInteractionType;
    cGcInteractionActivationCost mSecondaryActivationCost;
    cTkDynamicArray<cTkModelRendererData> maEventRenderers;
    cTkDynamicArray<cTkModelRendererData> maEventRenderersAlt;
    float mfSecondaryCameraTransitionTime;
    cGcInteractionDof mDepthOfField;
    cTkDynamicArray<cGcAlienPuzzleMissionOverride> maPuzzleMissionOverrideTable;
    cGcStoryUtilityOverride mStoryUtilityOverrideData;
    eOverrideInteriorExteriorMarker meOverrideInteriorExteriorMarker;
    bool mbReseedAfterRewardSuccess;
    bool mbUsePersonalPersistentBuffer;
    float mfInWorldUIScaler;
    float mfInWorldUIMinDistOverride;
    float mfInWorldUIMinDistOverrideV2;
    float mfInWorldUIForcedOffset;
    float mfInWorldUIForcedOffsetV2;
    bool mbInWorldUIUseCameraUp;
    TkID<128> mStartMissionOnUse;
    bool mbAllowMissionUnderwater;

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
