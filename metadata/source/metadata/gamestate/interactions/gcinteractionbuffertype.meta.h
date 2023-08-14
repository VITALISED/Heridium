#pragma once
#include "../../../../../pch.h"

enum eInteractionBufferType
{
    EInteractionBufferType_Distress_Signal = 0,
    EInteractionBufferType_Crate = 1,
    EInteractionBufferType_Destructable = 2,
    EInteractionBufferType_Terrain = 3,
    EInteractionBufferType_Cost = 4,
    EInteractionBufferType_Building = 5,
    EInteractionBufferType_Creature = 6,
    EInteractionBufferType_Maintenance = 7,
    EInteractionBufferType_Personal = 8,
    EInteractionBufferType_Personal_Maintenance = 9,
    EInteractionBufferType_FireteamSync = 10,
};

class cGcInteractionBufferType
{
public:
    static const unsigned __int64 muNameHash = 0x56096224708D16B;
    static const unsigned __int64 muTemplateHash = 0xA7327182011FA2C6;
    static const int miNumMembers = 1;

    eInteractionBufferType meInteractionBufferType;

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
