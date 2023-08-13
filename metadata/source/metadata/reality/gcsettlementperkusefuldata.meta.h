#pragma once
#include "pch.h"

class cGcSettlementStatType;

class cGcSettlementPerkUsefulData
{
public:
    static const unsigned __int64 muNameHash = 0xDEB32057FC4A2AC1;
    static const unsigned __int64 muTemplateHash = 0x27EC480E87BC3618;
    static const int miNumMembers = 6;

    TkID<128> mBaseID;
    unsigned __int64 mui64SeedValue;
    float mfChangeStrength;
    cGcSettlementStatType mStat;
    bool mbIsNegative;
    bool mbIsProc;

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
