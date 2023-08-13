#pragma once

#include "../../../../../../../../../pch.h"
class cGcCreatureFlockMovementData
{
    static const unsigned __int64 muNameHash = 17079968618453900183;
    static const unsigned __int64 muTemplateHash = 11914959110401348767;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
