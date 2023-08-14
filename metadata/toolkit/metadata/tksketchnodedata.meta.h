#pragma once
#include "../../../pch.h"

enum eTriggerType
{
    ETriggerType_Disabled = 0,
    ETriggerType_Interrupt = 1,
    ETriggerType_RunParallel = 2,
    ETriggerType_Blocked = 3,
    ETriggerType_QueueLatest = 4,
    ETriggerType_QueueAll = 5,
};
#include "../../../metadata/toolkit/metadata/tksketchnodeconnections.meta.h"

class cTkSketchNodeData
{
public:
    static const unsigned __int64 muNameHash = 0x34A0F43E0ECB3765;
    static const unsigned __int64 muTemplateHash = 0x42A7CE67E1CAAAA6;
    static const int miNumMembers = 7;

    cTkFixedString<32,char> macTypeName;
    eTriggerType meTriggerType;
    int miSelectedVariant;
    int miPositionX;
    int miPositionY;
    cTkDynamicArray<cTkSketchNodeConnections> maConnections;
    cTkDynamicArray<unsigned __int8> maCustomData;

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
