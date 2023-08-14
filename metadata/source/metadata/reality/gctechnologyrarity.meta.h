#pragma once
#include "../../../../pch.h"

enum eTechnologyRarity
{
    ETechnologyRarity_Normal = 0,
    ETechnologyRarity_VeryCommon = 1,
    ETechnologyRarity_Common = 2,
    ETechnologyRarity_Rare = 3,
    ETechnologyRarity_VeryRare = 4,
    ETechnologyRarity_Impossible = 5,
    ETechnologyRarity_Always = 6,
};

class cGcTechnologyRarity
{
public:
    static const unsigned __int64 muNameHash = 0xDB3D22C1C68F20C3;
    static const unsigned __int64 muTemplateHash = 0x39B9A7A9078A0304;
    static const int miNumMembers = 1;

    eTechnologyRarity meTechnologyRarity;

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
