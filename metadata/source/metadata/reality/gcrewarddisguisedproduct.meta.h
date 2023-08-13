#pragma once
#include "pch.h"

class cGcDefaultMissionProductEnum;

class cGcRewardDisguisedProduct
{
public:
    static const unsigned __int64 muNameHash = 0xDBFECF3462D8A0FB;
    static const unsigned __int64 muTemplateHash = 0x3069E357752DF95D;
    static const int miNumMembers = 6;

    cGcDefaultMissionProductEnum mDefault;
    TkID<128> mID;
    TkID<128> mDisplayAs;
    TkID<128> mAwardDisplayIDDuringMission;
    int miAmountMin;
    int miAmountMax;

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
