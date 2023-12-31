#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcmaintenanceelement.meta.h"

enum eInteractable
{
    EInteractable_OnlyWhenComplete = 0,
    EInteractable_OnlyWhenNotComplete = 1,
    EInteractable_Always = 2,
    EInteractable_Never = 3,
};
#include "../../../../../../metadata/toolkit/metadata/tkmodelrendererdata.meta.h"

enum eModelRendererResource
{
    EModelRendererResource_ModelNode = 0,
    EModelRendererResource_MasterModelNode = 1,
};
#include "../../../../../../metadata/source/metadata/simulation/components/utils/gcbroadcastlevel.meta.h"

class cGcMaintenanceComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x479CFCB871ABBE0;
    static const unsigned __int64 muTemplateHash = 0x508485AA3B7F83E0;
    static const int miNumMembers = 38;

    cTkDynamicArray<cGcMaintenanceElement> maPreInstalledTech;
    int miVisibleMaintenanceSlots;
    bool mbAllowRepair;
    bool mbAllowCharge;
    bool mbAllowDismantle;
    bool mbAllowInstallTech;
    bool mbAllowCraftProduct;
    bool mbAllowTransfer;
    bool mbAllowMoveAndStack;
    bool mbAllowTransferIn;
    bool mbAutoCompleteOnStart;
    bool mbUseModelResourceRenderer;
    bool mbUseBoundsForIconCentre;
    eInteractable meInteractable;
    bool mbForceNoninteraction;
    float mfCompletedTransitionDelay;
    bool mbShareInteractionModelRender;
    cTkModelRendererData mModelRenderData;
    cTkModelRendererData mModelRenderDataAlt;
    eModelRendererResource meModelRendererResource;
    cGcBroadcastLevel mBroadcastLevel;
    TkID<256> mTitle;
    TkID<256> mDescription;
    TkID<256> mActionButtonOverride;
    TkID<256> mActionDescriptionOverride;
    TkID<256> mTransferButtonOverride;
    TkID<256> mTransferDescriptionOverride;
    TkID<256> mDiscardButtonOverride;
    TkID<256> mDiscardDescriptionOverride;
    TkID<256> mActionWarningOverride;
    float mfInWorldUIScaler;
    float mfInWorldUIMinDistOverride;
    float mfInWorldUIMinDistOverrideV2;
    float mfInWorldUIForcedOffset;
    float mfInWorldUIForcedOffsetV2;
    bool mbInWorldUIUseCameraUp;
    bool mbInteractionRequiresPower;
    TkID<128> mStartMissionOnUse;

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
