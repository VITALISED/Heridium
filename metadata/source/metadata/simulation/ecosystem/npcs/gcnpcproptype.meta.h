#pragma once
#include "pch.h"

enum eNPCProp
{
    ENPCProp_None = 0,
    ENPCProp_IPad = 1,
    ENPCProp_HoloBlob = 2,
    ENPCProp_HoloFrigate = 3,
    ENPCProp_HoloShip = 4,
    ENPCProp_HoloMultitool = 5,
    ENPCProp_HoloSolarSystem = 6,
    ENPCProp_Container = 7,
    ENPCProp_Box = 8,
    ENPCProp_Cup = 9,
    ENPCProp_DontCare = 10,
    ENPCProp_RandomHologram = 11,
    ENPCProp_HoloDrone = 12,
};

class cGcNPCPropType
{
public:
    static const unsigned __int64 muNameHash = 0x69F60839059BF3CD;
    static const unsigned __int64 muTemplateHash = 0x6A5117479225A1A;
    static const int miNumMembers = 1;

    eNPCProp meNPCProp;

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
