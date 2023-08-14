#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/reality/gcproductdata.meta.h"
#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingentry.meta.h"

class cGcModBasePart
{
public:
    static const unsigned __int64 muNameHash = 0x6A104C45E1F1638D;
    static const unsigned __int64 muTemplateHash = 0x680E3A2651217E87;
    static const int miNumMembers = 3;

    cTkFixedString<64,char> macID;
    cGcProductData mProductData;
    cGcBaseBuildingEntry mPartData;

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
