#pragma once
#include "../../../../../../../../../pch.h"

enum ePetAction
{
    EPetAction_Tickle = 0,
    EPetAction_Treat = 1,
    EPetAction_Ride = 2,
    EPetAction_Customise = 3,
    EPetAction_Abandon = 4,
    EPetAction_LayEgg = 5,
    EPetAction_Adopt = 6,
    EPetAction_Milk = 7,
    EPetAction_HarvestSpecial = 8,
};

class cGcCreaturePetRewardActions
{
    static const unsigned __int64 muNameHash = 0xA78B3BB0870D4585;
    static const unsigned __int64 muTemplateHash = 0xA7BB173D3DEC06E0;
    static const int miNumMembers = 1;

    ePetAction mePetAction;

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
