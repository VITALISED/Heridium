#pragma once

#include "../../../../../../../../pch.h"
enum eFreighterNPCType
{
    EFreighterNPCType_SquadronPilot = 0,
    EFreighterNPCType_FrigateCaptain = 1,
    EFreighterNPCType_WorkerBio = 2,
    EFreighterNPCType_WorkerTech = 3,
    EFreighterNPCType_WorkerIndustry = 4,
};

class cGcFreighterNPCType
{
    static const unsigned __int64 muNameHash = 14212698563982637221;
    static const unsigned __int64 muTemplateHash = 18123586745448071394;
    static const int miNumMembers = 1;

    eFreighterNPCType meFreighterNPCType;

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
