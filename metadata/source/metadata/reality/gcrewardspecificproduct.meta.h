#pragma once
#include "pch.h"

class cGcDefaultMissionProductEnum;

class cGcRewardSpecificProduct
{
public:
    static const unsigned __int64 muNameHash = 0x691B32769ECE3BC6;
    static const unsigned __int64 muTemplateHash = 0x54DD0DBD5DAB09E9;
    static const int miNumMembers = 10;

    cGcDefaultMissionProductEnum mDefault;
    TkID<128> mID;
    int miAmountMin;
    int miAmountMax;
    bool mbHideAmountInMessage;
    bool mbForceSpecialMessage;
    bool mbHideInSeasonRewards;
    bool mbSilent;
    TkID<128> mSeasonRewardListFormat;
    TkID<128> mRequiresTech;

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
