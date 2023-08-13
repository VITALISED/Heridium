#pragma once

#include "../../../../../../pch.h"
class cGcDefaultMissionSubstanceEnum;

class cGcRewardSpecificSubstance
{
    static const unsigned __int64 muNameHash = 17578864238693136249;
    static const unsigned __int64 muTemplateHash = 16535862793115495952;
    static const int miNumMembers = 8;

    cGcDefaultMissionSubstanceEnum mDefault;
    TkID<128> mID;
    int miAmountMin;
    int miAmountMax;
    bool mbDisableMultiplier;
    bool mbRewardAsBlobs;
    bool mbUseFuelMultiplier;
    bool mbSilent;

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