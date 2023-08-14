#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcuniverseaddressdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcdiscoverytype.meta.h"

class cGcAtlasDiscoveryData
{
public:
    static const unsigned __int64 muNameHash = 0x34272E24BB717FCB;
    static const unsigned __int64 muTemplateHash = 0x96A8C4489DAC50F2;
    static const int miNumMembers = 4;

    cGcUniverseAddressData mUniverseAddress;
    cGcDiscoveryType mType;
    int miPayloadElements;
    cTkFixedArray<unsigned __int64, 5> maPayload;

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
