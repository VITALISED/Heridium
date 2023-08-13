#pragma once

#include "../../../../../../../../pch.h"
enum eInteractable
{
    EInteractable_OnlyWhenComplete = 0,
    EInteractable_OnlyWhenNotComplete = 1,
    EInteractable_Always = 2,
    EInteractable_Never = 3,
};
class cTkModelRendererData;
class cTkModelRendererData;

enum eModelRendererResource
{
    EModelRendererResource_ModelNode = 0,
    EModelRendererResource_MasterModelNode = 1,
};
class cGcBroadcastLevel;

class cGcMaintenanceComponentData
{
    static const unsigned __int64 muNameHash = 322517321385688032;
    static const unsigned __int64 muTemplateHash = 5801909186149188576;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
