#pragma once
#include "../../../../../../pch.h"

enum eParticipantType
{
    EParticipantType_None = 0,
    EParticipantType_MissionGiver = 1,
    EParticipantType_MissionGiverReference = 2,
    EParticipantType_Primary = 3,
    EParticipantType_Secondary1 = 4,
    EParticipantType_Secondary2 = 5,
    EParticipantType_Secondary3 = 6,
    EParticipantType_Secondary4 = 7,
    EParticipantType_Secondary5 = 8,
    EParticipantType_Secondary6 = 9,
    EParticipantType_Secondary7 = 10,
    EParticipantType_Secondary8 = 11,
    EParticipantType_Secondary9 = 12,
};

class cGcPlayerMissionParticipantType
{
    static const unsigned __int64 muNameHash = 0x233DD65A730CE9DF;
    static const unsigned __int64 muTemplateHash = 0xECDE7A3D64070AF4;
    static const int miNumMembers = 1;

    eParticipantType meParticipantType;

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
