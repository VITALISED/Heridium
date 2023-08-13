#pragma once

#include "../../../../../pch.h"
class cTkModelRendererCameraData;

enum eThumbnailMode
{
    EThumbnailMode_None = 0,
    EThumbnailMode_HUD = 1,
    EThumbnailMode_GUI = 2,
};

enum eFocusType
{
    EFocusType_ResourceBounds = 0,
    EFocusType_ResourceBoundingHeight = 1,
    EFocusType_NodeBoundingBox = 2,
    EFocusType_DiscoveryView = 3,
};

class cTkModelRendererData
{
    static const unsigned __int64 muNameHash = 6047322774830461435;
    static const unsigned __int64 muTemplateHash = 5414701486975972663;
    static const int miNumMembers = 16;

    cTkModelRendererCameraData mCamera;
    float mfFov;
    float mfAspectRatio;
    eThumbnailMode meThumbnailMode;
    eFocusType meFocusType;
    TkID<256> mFocusLocator;
    cTkVector mFocusOffset;
    float mfFocusInterpTime;
    float mfBlendInTime;
    float mfBlendInOffset;
    TkID<128> mAnim;
    float mfHeightOffset;
    bool mbUsePlayerCameraInHmd;
    bool mbAlignUIToCameraInHmd;
    bool mbUseSensibleCameraFocusNodeIsNowOffsetNode;
    bool mbLookForFocusInMasterModel;

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
