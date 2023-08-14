#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/missions/types/gcconstructionpart.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/types/gcbuildingpartsearchtype.meta.h"

class cGcMissionSequenceConstruct
{
public:
    static const unsigned __int64 muNameHash = 0x694A21AA8BC8BAD4;
    static const unsigned __int64 muTemplateHash = 0xC3530D73DF7B4A6A;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macMessage;
    int miNumUniquePartsRequired;
    cTkDynamicArray<cGcConstructionPart> maPotentialParts;
    cGcBuildingPartSearchType mType;
    cTkFixedString<128,char> macDebugText;

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
