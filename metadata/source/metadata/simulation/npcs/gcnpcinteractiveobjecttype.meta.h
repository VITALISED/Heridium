#pragma once

#include "../../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 7813424559629904178;
    static const unsigned __int64 muTemplateHash = 6331731016183443435;
    static const int miNumMembers = 1;

    eNPCInteractiveObjectType meNPCInteractiveObjectType;

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
