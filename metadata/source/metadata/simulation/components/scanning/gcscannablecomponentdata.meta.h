#pragma once

#include "../../../../../../../../pch.h"
class cGcScannerIconTypes;

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
    static const unsigned __int64 muNameHash = 8411176603705469953;
    static const unsigned __int64 muTemplateHash = 11094419786989604396;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
