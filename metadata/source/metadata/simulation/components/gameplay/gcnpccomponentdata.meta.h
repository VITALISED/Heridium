#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/character/gccharacteralternateanimation.meta.h"

class cGcNPCComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x5289598B4907DC8E;
    static const unsigned __int64 muTemplateHash = 0xEDE9BF0DD3A33F8F;
    static const int miNumMembers = 6;

    cGcAlienRace mRace;
    TkID<128> mHologramEffect;
    bool mbIsOldStyleNPC;
    bool mbIsMech;
    cTkDynamicArray<cGcCharacterAlternateAnimation> maAlternateAnims;
    cTkDynamicArray<TkID<128> > maTags;

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
