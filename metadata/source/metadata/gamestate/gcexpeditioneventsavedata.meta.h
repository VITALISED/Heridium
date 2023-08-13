#pragma once
#include "../../../../../../pch.h"

class cGcExpeditionEventSaveData
{
    static const unsigned __int64 muNameHash = 0xA95CE4EF897F62B2;
    static const unsigned __int64 muTemplateHash = 0xF229AC5E7FE69A17;
    static const int miNumMembers = 13;

    cTkSeed mSeed;
    unsigned __int64 mui64UA;
    cTkDynamicArray<int> maAffectedFrigateIndices;
    cTkDynamicArray<int> maRepairingFrigateIndices;
    cTkDynamicArray<int> maAffectedFrigateResponses;
    TkID<256> mEventID;
    TkID<256> mInterventionEventID;
    cTkFixedString<64,char> macOverriddenDescription;
    bool mbWhaleEvent;
    TkID<128> mOverriddenReward;
    bool mbSuccess;
    bool mbIsInterventionEvent;
    bool mbAvoidedIntervention;

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
