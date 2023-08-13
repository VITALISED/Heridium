#pragma once

#include "../../../../../../../pch.h"
class cGcRealityCommonFactions;
class cGcAISpaceshipRoles;

class cGcButtonSpawnOffset
{
    static const unsigned __int64 muNameHash = 4802640926284575786;
    static const unsigned __int64 muTemplateHash = 3563629447088486328;
    static const int miNumMembers = 8;

    float mfAngleMin;
    float mfAngleMax;
    float mfOffset;
    float mfSpacing;
    float mfFacing;
    int miCount;
    cGcRealityCommonFactions mFaction;
    cGcAISpaceshipRoles mShipRole;

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
