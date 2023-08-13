#pragma once
#include "pch.h"

class cGcAtlasSendSubmitContribution;

enum eSubmitType
{
    ESubmitType_Value = 0,
    ESubmitType_Stat = 1,
    ESubmitType_StatsDiff = 2,
};

class cGcRewardCommunityContribution
{
public:
    static const unsigned __int64 muNameHash = 0xCE090483FC7B2C67;
    static const unsigned __int64 muTemplateHash = 0xA8EC14D17EF48A02;
    static const int miNumMembers = 4;

    cGcAtlasSendSubmitContribution mContribution;
    eSubmitType meSubmitType;
    TkID<128> mStat;
    TkID<128> mOtherStat;

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
