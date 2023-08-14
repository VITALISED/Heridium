#pragma once
#include "../../../../../../../pch.h"

class cGcCreatureFlockMovementData
{
public:
    static const unsigned __int64 muNameHash = 0xED083CF705C39B97;
    static const unsigned __int64 muTemplateHash = 0xA55A702EC8C6D49F;
    static const int miNumMembers = 24;

    int miMinFlockMembers;
    int miMaxFlockMembers;
    float mfFlockFollow;
    float mfFlockHysteresis;
    float mfFlockCohere;
    float mfFlockSeperate;
    float mfFlockSeperateMinDist;
    float mfFlockSeperateMaxDist;
    float mfFlockAlign;
    float mfFlockAvoidTerrain;
    float mfFlockAvoidTerrainMinDist;
    float mfFlockAvoidTerrainMaxDist;
    float mfFlockAvoidPredators;
    float mfFlockAvoidPredatorsMinDist;
    float mfFlockAvoidPredatorsMaxDist;
    float mfFlockAvoidPredatorsSpeedBoost;
    float mfMoveInFacingStrength;
    float mfFlockMoveSpeed;
    float mfFlockMoveDirectionTime;
    float mfFlockTurnAngle;
    float mfMaxBank;
    float mfBankTime;
    float mfMinFlapSpeed;
    float mfMaxFlapSpeed;

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
