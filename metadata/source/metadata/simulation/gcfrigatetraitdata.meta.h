#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcfrigatestattype.meta.h"
#include "../../../../metadata/source/metadata/reality/gcfrigatetraitstrength.meta.h"

class cGcFrigateTraitData
{
public:
    static const unsigned __int64 muNameHash = 0x3A526CC4024569BA;
    static const unsigned __int64 muTemplateHash = 0xDBF0C9D3E8C11AFF;
    static const int miNumMembers = 5;

    TkID<128> mID;
    TkID<256> mDisplayName;
    cGcFrigateStatType mFrigateStatType;
    cGcFrigateTraitStrength mStrength;
    cTkFixedArray<int, 8> maChanceOfBeingOffered;

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
