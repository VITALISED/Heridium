#pragma once
#include "pch.h"

class cGcExpeditionCategory;
class cGcNumberedTextList;

class cGcExpeditionInterventionEventData
{
public:
    static const unsigned __int64 muNameHash = 0x1920DA0CB7B61986;
    static const unsigned __int64 muTemplateHash = 0x243622A7FB6C6BCB;
    static const int miNumMembers = 10;

    TkID<256> mID;
    int miSelectionWeight;
    cGcExpeditionCategory mExpeditionCategory;
    cGcNumberedTextList mInteractionID;
    cTkFixedString<32,char> macSuccessLogEntry;
    cTkFixedString<32,char> macAvoidanceLogEntry;
    cTkFixedString<32,char> macFailureLogEntry;
    TkID<128> mSuccessReward;
    TkID<128> mFailureReward;
    int miFailureDamageChance;

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
