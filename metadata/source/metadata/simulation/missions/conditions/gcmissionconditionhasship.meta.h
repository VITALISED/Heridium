#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcinventoryclass.meta.h"

class cGcMissionConditionHasShip
{
public:
    static const unsigned __int64 muNameHash = 0x9511DDC4A0C718D3;
    static const unsigned __int64 muTemplateHash = 0x4377B1D9BF160FD4;
    static const int miNumMembers = 6;

    cGcSpaceshipClasses mShipType;
    cGcInventoryClass mShipInventoryClass;
    bool mbCheckAllShips;
    bool mbBetterClassMatches;
    bool mbDontCheckType;
    bool mbTakeValueFromSeasonData;

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
