#pragma once

#include "../../../../../../pch.h"
class cGcAtlasSendSubmitContribution;

enum eSubmitType
{
    ESubmitType_Value = 0,
    ESubmitType_Stat = 1,
    ESubmitType_StatsDiff = 2,
};

class cGcRewardCommunityContribution
{
    static const unsigned __int64 muNameHash = 14846402611526708327;
    static const unsigned __int64 muTemplateHash = 12172126782886283778;
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
