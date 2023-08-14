#pragma once
#include "../../../../../pch.h"

enum eLinkNetworkType
{
    ELinkNetworkType_Power = 0,
    ELinkNetworkType_Resources = 1,
    ELinkNetworkType_Fuel = 2,
    ELinkNetworkType_Portals = 3,
    ELinkNetworkType_PlantGrowth = 4,
    ELinkNetworkType_ByteBeat = 5,
};

class cGcLinkNetworkTypes
{
public:
    static const unsigned __int64 muNameHash = 0xA2D103E3C1ECFE30;
    static const unsigned __int64 muTemplateHash = 0x50A178234C7BFD1C;
    static const int miNumMembers = 1;

    eLinkNetworkType meLinkNetworkType;

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
