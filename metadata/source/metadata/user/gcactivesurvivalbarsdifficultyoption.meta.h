#pragma once
#include "pch.h"

enum eActiveSurvivalBarsDifficulty
{
    EActiveSurvivalBarsDifficulty_None = 0,
    EActiveSurvivalBarsDifficulty_HealthOnly = 1,
    EActiveSurvivalBarsDifficulty_HealthAndHazard = 2,
    EActiveSurvivalBarsDifficulty_All = 3,
};

class cGcActiveSurvivalBarsDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x96CF7C217D988FDF;
    static const unsigned __int64 muTemplateHash = 0x63F32414B145C38C;
    static const int miNumMembers = 1;

    eActiveSurvivalBarsDifficulty meActiveSurvivalBarsDifficulty;

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
