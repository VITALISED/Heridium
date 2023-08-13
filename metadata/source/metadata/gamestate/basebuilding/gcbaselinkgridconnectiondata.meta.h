#pragma once

#include "../../../../../../../pch.h"
class cGcLinkNetworkTypes;

class cGcBaseLinkGridConnectionData
{
    static const unsigned __int64 muNameHash = 15569854787481822823;
    static const unsigned __int64 muTemplateHash = 13002831710222773607;
    static const int miNumMembers = 7;

    cGcLinkNetworkTypes mNetwork;
    int miNetworkSubGroup;
    int miNetworkMask;
    float mfConnectionDistance;
    bool mbUseMinDistance;
    cTkDynamicArray<cTkVector> maLinkSocketPositions;
    cTkDynamicArray<int> maLinkSocketSubGroups;

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
