#pragma once

#include "../../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 11732162781022846512;
    static const unsigned __int64 muTemplateHash = 5810057087287033116;
    static const int miNumMembers = 1;

    eLinkNetworkType meLinkNetworkType;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
