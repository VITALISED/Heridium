#pragma once
#include "../../../../../../../pch.h"

enum eSwarmMovementType
{
    ESwarmMovementType_None = 0,
    ESwarmMovementType_Circle = 1,
    ESwarmMovementType_Random = 2,
    ESwarmMovementType_Search = 3,
    ESwarmMovementType_FollowPlayer = 4,
    ESwarmMovementType_FollowPlayerLimited = 5,
};
#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreatureswarmdataparams.meta.h"

class cGcCreatureSwarmData
{
public:
    static const unsigned __int64 muNameHash = 0x87C83AD7D0C1D117;
    static const unsigned __int64 muTemplateHash = 0xB3AED157D9B5E63;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
