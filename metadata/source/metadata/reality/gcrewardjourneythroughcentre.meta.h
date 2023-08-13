#pragma once

#include "../../../../../../pch.h"
enum eCentreJourneyDestination
{
    ECentreJourneyDestination_Next = 0,
    ECentreJourneyDestination_Abandoned = 1,
    ECentreJourneyDestination_Vicious = 2,
    ECentreJourneyDestination_Lush = 3,
    ECentreJourneyDestination_Balanced = 4,
};

class cGcRewardJourneyThroughCentre
{
    static const unsigned __int64 muNameHash = 2103389298577359400;
    static const unsigned __int64 muTemplateHash = 14325517314425330717;
    static const int miNumMembers = 1;

    eCentreJourneyDestination meCentreJourneyDestination;

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