#pragma once
#include "pch.h"

class cGcLinkNetworkTypes;

class cGcBaseLinkGridConnectionData
{
public:
    static const unsigned __int64 muNameHash = 0xD8133C6FC444E667;
    static const unsigned __int64 muTemplateHash = 0xB473568C6A036D67;
    static const int miNumMembers = 7;

    cGcLinkNetworkTypes mNetwork;
    int miNetworkSubGroup;
    int miNetworkMask;
    float mfConnectionDistance;
    bool mbUseMinDistance;
    cTkDynamicArray<cTkVector31> maLinkSocketPositions;
    cTkDynamicArray<int1> maLinkSocketSubGroups;

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
