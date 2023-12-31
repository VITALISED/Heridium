#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcPlanetResourceIconLookup
{
public:
    static const unsigned __int64 muNameHash = 0x1E3880E5B9724A9C;
    static const unsigned __int64 muTemplateHash = 0xBACB1CAC493CCF13;
    static const int miNumMembers = 3;

    TkID<128> mID;
    cTkTextureResource mIcon;
    cTkTextureResource mIconBinocs;

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
