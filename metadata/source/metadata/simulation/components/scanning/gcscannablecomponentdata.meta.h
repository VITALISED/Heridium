#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/graphics/hud/gcscannericontypes.meta.h"

enum eScannableType
{
    EScannableType_Binoculars = 0,
    EScannableType_BinocularsHotspots = 1,
    EScannableType_Scanner = 2,
    EScannableType_Marker = 3,
    EScannableType_None = 4,
};

class cGcScannableComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x74BA808E86F0EC01;
    static const unsigned __int64 muTemplateHash = 0x99F74C03F8948E2C;
    static const int miNumMembers = 20;

    float mfScanRange;
    cTkFixedString<32,char> macScanName;
    float mfScanTime;
    float mfCompassRangeMultiplier;
    float mfAlwaysShowRange;
    bool mbCanTagIcon;
    bool mbClearTagOnArrival;
    bool mbDisableIfBuildingPart;
    bool mbDisableIfInBase;
    bool mbUseModelNode;
    cGcScannerIconTypes mIcon;
    eScannableType meScannableType;
    bool mbIsPlacedMarker;
    bool mbShowInFreighterBranchRoom;
    bool mbTellPlayerIfFreighterObjectUsed;
    TkID<256> mFreighterObjectAlreadyUsedLocID;
    bool mbAllowedToMerge;
    bool mbMarkerActiveWithNodeInactive;
    TkID<128> mMissionSurveyId;
    float mfMinDisplayDistanceOverride;

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
