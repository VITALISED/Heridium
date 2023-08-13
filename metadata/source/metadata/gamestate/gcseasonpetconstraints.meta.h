#pragma once

#include "../../../../../../pch.h"
class cGcBiomeType;

class cGcSeasonPetConstraints
{
    static const unsigned __int64 muNameHash = 1535278634147156448;
    static const unsigned __int64 muTemplateHash = 18276771517820830160;
    static const int miNumMembers = 8;

    TkID<128> mCreatureId;
    float mfMinRelativeScale;
    float mfMaxRelativeScale;
    bool mbSpecificBiome;
    cGcBiomeType mBiome;
    float mfStartingTrust;
    unsigned __int64 mui64TimeSinceLastEgg;
    unsigned __int64 mui64TimeSinceBirth;

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