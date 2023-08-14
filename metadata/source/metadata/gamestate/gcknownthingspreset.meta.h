#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcwordknowledge.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcwordgroupknowledge.meta.h"

class cGcKnownThingsPreset
{
public:
    static const unsigned __int64 muNameHash = 0x50D7C1FE13F7260D;
    static const unsigned __int64 muTemplateHash = 0xCEACB9E8E146424;
    static const int miNumMembers = 6;

    cTkDynamicArray<TkID<128> > maKnownTech;
    cTkDynamicArray<TkID<128> > maKnownProducts;
    cTkDynamicArray<TkID<128> > maKnownSpecials;
    cTkDynamicArray<TkID<256> > maKnownRefinerRecipes;
    cTkDynamicArray<cGcWordKnowledge> maKnownWords;
    cTkDynamicArray<cGcWordGroupKnowledge> maKnownWordGroups;

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
