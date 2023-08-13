#pragma once
#include "../../../../../../../../pch.h"

enum eMissionDifficulty
{
    EMissionDifficulty_Easy = 0,
    EMissionDifficulty_Normal = 1,
    EMissionDifficulty_Hard = 2,
};

class cGcMissionDifficulty
{
    static const unsigned __int64 muNameHash = 0x81EBB5E64823914E;
    static const unsigned __int64 muTemplateHash = 0xD5B1EB7573A2AD22;
    static const int miNumMembers = 1;

    eMissionDifficulty meMissionDifficulty;

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
