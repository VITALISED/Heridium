#pragma once
#include "pch.h"

class cGcPlayerMissionProgress
{
public:
    static const unsigned __int64 muNameHash = 0x1611798444BC0C13;
    static const unsigned __int64 muTemplateHash = 0xC4054BE6D6E72C73;
    static const int miNumMembers = 5;

    TkID<128> mMission;
    int miProgress;
    unsigned __int64 mui64Seed;
    unsigned __int64 mui64Data;
    cTkFixedArray<cGcPlayerMissionParticipant, 13> maParticipants;

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
