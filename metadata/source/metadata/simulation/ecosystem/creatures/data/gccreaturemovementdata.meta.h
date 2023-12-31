#pragma once
#include "../../../../../../../pch.h"

#include "../../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/data/gccreaturemoveanimdata.meta.h"

class cGcCreatureMovementData
{
public:
    static const unsigned __int64 muNameHash = 0x1F15CCCBBBCEC86A;
    static const unsigned __int64 muTemplateHash = 0x13D85FADF967EDC;
    static const int miNumMembers = 8;

    cTkDynamicArray<cGcCreatureMoveAnimData> maAnims;
    float mfMoveRange;
    float mfMoveSpeedScale;
    float mfTurnRadiusScale;
    float mfHeightMin;
    float mfHeightMax;
    float mfHeightTime;
    bool mbHerd;

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
