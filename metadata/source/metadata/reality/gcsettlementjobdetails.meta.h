#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gameplay/gcsettlementstattype.meta.h"

class cGcSettlementJobDetails
{
public:
    static const unsigned __int64 muNameHash = 0xFCC8749007B86A54;
    static const unsigned __int64 muTemplateHash = 0x71E251B9F0BECF4A;
    static const int miNumMembers = 3;

    TkID<256> mPerkTitle;
    TkID<256> mInTextTitle;
    cGcSettlementStatType mStat;

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
