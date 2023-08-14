#pragma once
#include "../../../../../../pch.h"

class cGcMissionSequenceConstructSettlementBuildingWithScanEvent
{
public:
    static const unsigned __int64 muNameHash = 0x9DC327D85EF1681E;
    static const unsigned __int64 muTemplateHash = 0x994472AEF21AC74F;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macMessageWhileBuilding;
    cTkFixedString<128,char> macMessageWithItemsGathered;
    cTkFixedString<128,char> macMessageWhenDistant;
    TkID<256> mScanEvent;
    float mfForceCompleteSequenceAtStagePercentage;
    cTkFixedString<128,char> macDebugText;

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
