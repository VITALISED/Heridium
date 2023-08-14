#pragma once
#include "../../../../pch.h"

enum eActivationType
{
    EActivationType_GroupNode = 0,
    EActivationType_Locator = 1,
};

class cGcObjectPlacementComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x6520972F5B89CD77;
    static const unsigned __int64 muTemplateHash = 0x44119D1A01247A34;
    static const int miNumMembers = 7;

    cTkFixedString<32,char> macGroupNodeName;
    eActivationType meActivationType;
    float mfFractionOfNodesActive;
    int miMaxNodesActivated;
    int miMaxGroupsActivated;
    bool mbUseRaycast;
    bool mbUseNodeParent;

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
