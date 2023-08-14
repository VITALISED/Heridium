#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gameplay/gcsettlementjudgementtype.meta.h"
#include "../../../../metadata/source/metadata/reality/gcsettlementjudgementoption.meta.h"

enum eNPCs
{
    ENPCs_None = 0,
    ENPCs_One = 1,
    ENPCs_Two = 2,
};

class cGcSettlementJudgementData
{
public:
    static const unsigned __int64 muNameHash = 0x601CD433A66F7318;
    static const unsigned __int64 muTemplateHash = 0xDED5B44D3B310AC9;
    static const int miNumMembers = 18;

    cGcSettlementJudgementType mJudgementType;
    float mfWeighting;
    TkID<256> mHeaderOverride;
    TkID<256> mTitle;
    TkID<256> mNPCTitle;
    TkID<256> mQuestionText;
    TkID<256> mDilemmaText;
    bool mbUseResearchLoc;
    bool mbUseAltResearchLoc;
    cGcSettlementJudgementOption mOption1;
    cGcSettlementJudgementOption mOption2;
    TkID<128> mNPC1CustomId;
    TkID<128> mNPC2CustomId;
    TkID<256> mNPC1CustomName;
    TkID<256> mNPC2CustomName;
    TkID<128> mNPC1HoloEffect;
    TkID<128> mNPC2HoloEffect;
    eNPCs meNPCs;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
