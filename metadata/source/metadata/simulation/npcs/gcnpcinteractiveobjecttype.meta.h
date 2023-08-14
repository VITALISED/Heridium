#pragma once
#include "../../../../../pch.h"

enum eNPCInteractiveObjectType
{
    ENPCInteractiveObjectType_Idle = 0,
    ENPCInteractiveObjectType_Generic = 1,
    ENPCInteractiveObjectType_Chair = 2,
    ENPCInteractiveObjectType_Conversation = 3,
    ENPCInteractiveObjectType_WatchShip = 4,
    ENPCInteractiveObjectType_Shop = 5,
    ENPCInteractiveObjectType_Dance = 6,
    ENPCInteractiveObjectType_None = 7,
};

class cGcNPCInteractiveObjectType
{
public:
    static const unsigned __int64 muNameHash = 0x6C6EDC3D5C0DA932;
    static const unsigned __int64 muTemplateHash = 0x57DED3CFF0EFEFEB;
    static const int miNumMembers = 1;

    eNPCInteractiveObjectType meNPCInteractiveObjectType;

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
