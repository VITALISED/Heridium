#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcuniverseaddressdata.meta.h"

class cGcAtlasMessage
{
public:
    static const unsigned __int64 muNameHash = 0x81E5018BD0B4C94D;
    static const unsigned __int64 muTemplateHash = 0x5C61E84BEA8B2ECE;
    static const int miNumMembers = 4;

    cGcUniverseAddressData mUniverseAddress;
    cTkFixedString<128,char> macCustomName;
    cTkVector3 mPosition;
    int miColourIndex;

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
