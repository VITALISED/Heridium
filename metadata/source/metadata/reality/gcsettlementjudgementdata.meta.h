#pragma once

#include "../../../../../../pch.h"
class cGcSettlementJudgementType;
class cGcSettlementJudgementOption;
class cGcSettlementJudgementOption;

enum eNPCs
{
    ENPCs_None = 0,
    ENPCs_One = 1,
    ENPCs_Two = 2,
};

class cGcSettlementJudgementData
{
    static const unsigned __int64 muNameHash = 6925643645289722648;
    static const unsigned __int64 muTemplateHash = 16056938290257922761;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
