#pragma once

#include "../../../../../../../../../pch.h"
enum eSwarmMovementType
{
    ESwarmMovementType_None = 0,
    ESwarmMovementType_Circle = 1,
    ESwarmMovementType_Random = 2,
    ESwarmMovementType_Search = 3,
    ESwarmMovementType_FollowPlayer = 4,
    ESwarmMovementType_FollowPlayerLimited = 5,
};

class cGcCreatureSwarmData
{
    static const unsigned __int64 muNameHash = 9784134889057145111;
    static const unsigned __int64 muTemplateHash = 809219759623855715;
    static const int miNumMembers = 6;

    int miMinCount;
    int miMaxCount;
    float mfSwarmMovementSpeed;
    float mfSwarmMovementRadius;
    eSwarmMovementType meSwarmMovementType;
    cTkDynamicArray<cGcCreatureSwarmDataParams> maParams;

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
