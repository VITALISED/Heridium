#pragma once
#include "../../../../../../pch.h"

enum eEnergyDrainDifficulty
{
    EEnergyDrainDifficulty_Slow = 0,
    EEnergyDrainDifficulty_Normal = 1,
    EEnergyDrainDifficulty_Fast = 2,
};

class cGcEnergyDrainDifficultyOption
{
    static const unsigned __int64 muNameHash = 0xCB8A748BB740CFAE;
    static const unsigned __int64 muTemplateHash = 0x8110581C7BD94717;
    static const int miNumMembers = 1;

    eEnergyDrainDifficulty meEnergyDrainDifficulty;

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
