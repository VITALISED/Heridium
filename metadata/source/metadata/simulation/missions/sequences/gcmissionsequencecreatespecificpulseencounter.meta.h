#pragma once
#include "../../../../../../../../pch.h"

class cGcMissionSequenceCreateSpecificPulseEncounter
{
    static const unsigned __int64 muNameHash = 0x245D62E60DEB8B1E;
    static const unsigned __int64 muTemplateHash = 0x8DBF2F46DA1B86F5;
    static const int miNumMembers = 9;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macMessageNoShip;
    cTkFixedString<128,char> macMessageNotPulsing;
    cTkFixedString<128,char> macMessageSignalBlocked;
    float mfMinTimeInPulse;
    TkID<128> mPulseEncounterID;
    bool mbAllowAnyEncounter;
    bool mbSilent;
    cTkFixedString<128,char> macDebugText;

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
