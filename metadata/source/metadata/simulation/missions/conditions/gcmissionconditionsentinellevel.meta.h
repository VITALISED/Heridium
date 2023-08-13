#pragma once

#include "../../../../../../../../pch.h"
enum eRequiredSentinelLevel
{
    ERequiredSentinelLevel_None = 0,
    ERequiredSentinelLevel_Low = 1,
    ERequiredSentinelLevel_Default = 2,
    ERequiredSentinelLevel_Aggressive = 3,
};

class cGcMissionConditionSentinelLevel
{
    static const unsigned __int64 muNameHash = 12996816280634617918;
    static const unsigned __int64 muTemplateHash = 12611460895984734715;
    static const int miNumMembers = 1;

    eRequiredSentinelLevel meRequiredSentinelLevel;

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
