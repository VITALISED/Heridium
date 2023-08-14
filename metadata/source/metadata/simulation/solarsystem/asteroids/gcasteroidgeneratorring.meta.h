#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/solarsystem/gcasteroidgeneratorassignment.meta.h"

class cGcAsteroidGeneratorRing
{
public:
    static const unsigned __int64 muNameHash = 0x79403B157D846B70;
    static const unsigned __int64 muTemplateHash = 0xFEAAE4F2806F9584;
    static const int miNumMembers = 9;

    cGcAsteroidGeneratorAssignment mAssignment;
    float mfLowerRadius;
    float mfUpperRadius;
    float mfPushRadius;
    int miOffBalance;
    cTkVector3 mRotation;
    float mfUSpread;
    float mfPushAmount;
    bool mbFlipPush;

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
